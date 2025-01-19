const int zeroCrossingPin = 2; // پین ورودی زیرو کراسینگ
const int gatePin = 9;         // پین گیت
const int potPin = A0;         // پین پتانسیومتر

volatile bool zeroCrossDetected = false;
volatile unsigned long lastZeroCrossTime = 0;
int delayTime = 5000;          // زمان تأخیر اولیه (5 میلی‌ثانیه)

void setup() {
  pinMode(zeroCrossingPin, INPUT);
  pinMode(gatePin, OUTPUT);
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(zeroCrossingPin), zeroCrossingISR, RISING);
}

void loop() {
  // خواندن مقدار پتانسیومتر
  int potValue = analogRead(potPin);
  delayTime = map(potValue, 0, 1023, 500, 8700); // محدود به 1 تا 9.5 میلی‌ثانیه

  // بررسی فلگ زیرو کراسینگ
  if (zeroCrossDetected) {
      zeroCrossDetected = false;
      delayMicroseconds(delayTime); // تأخیر زاویه آتش

      // ارسال پالس گیت
      digitalWrite(gatePin, HIGH);
      delayMicroseconds(500); // مدت پالس گیت
      digitalWrite(gatePin, LOW);
  }

  // نمایش مقدار تأخیر در سریال مانیتور
  if (millis() % 100 == 0) { // هر 100 میلی‌ثانیه
      Serial.print("Delay Time (us): ");
      Serial.println(delayTime);
  }
}

void zeroCrossingISR() {
  unsigned long currentTime = micros();
  if (currentTime - lastZeroCrossTime > 5000) { // دیبانس 5 میلی‌ثانیه
      lastZeroCrossTime = currentTime;
      zeroCrossDetected = true;
  }
}
