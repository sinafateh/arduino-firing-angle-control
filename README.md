# arduino-firing-angle-control

firing Angle Control using Microcontrollers  

---

**Description:**  
This project focuses on designing a phase angle control system for AC voltage regulation. By adjusting the firing angle of a TRIAC, the output voltage across the load is controlled. The system is implemented using microcontrollers (Arduino or STM32) and features feedback mechanisms to maintain output voltage stability under varying load conditions.

---

**Key Features:**  
- **Firing Angle Adjustment:** Control the phase angle of the AC voltage using a potentiometer or automated feedback.  
- **Voltage Feedback:** Utilize sensors (e.g., ZMPT101B) to monitor the output voltage and adjust the angle dynamically for stability.  
- **Load Regulation:** Ensure consistent voltage output across different loads.  
- **Zero Crossing Detection:** Accurately detect the zero-crossing points of the AC waveform using a dedicated circuit for precise firing angle control.  
- **Scalability:** Easily adaptable for various microcontrollers like Arduino, STM32, or others.  

---

**Components Used:**  
1. **Microcontroller:** Arduino (e.g., UNO, Nano) or STM32 (e.g., STM32F103C8).  
2. **TRIAC and Optocoupler:** For AC voltage control (e.g., BT136, MOC3021).  
3. **Zero Crossing Detector:** Built using an optocoupler or dedicated IC.  
4. **Voltage Sensor:** ZMPT101B for feedback-based control.  
5. **Load:** Resistive or inductive (e.g., bulb, motor).  

---

**How It Works:**  
1. The zero-crossing detector identifies the points where the AC waveform crosses zero voltage.  
2. Based on the detected zero crossings, the microcontroller calculates the desired delay to adjust the firing angle.  
3. The TRIAC is triggered at the calculated angle, controlling the power delivered to the load.  
4. Feedback from the voltage sensor ensures the output voltage remains within a specified range, adjusting the firing angle dynamically if needed.  

---

**Applications:**  
- Light dimmers  
- Speed control for AC motors  
- Temperature regulation in heating elements  
- AC voltage regulators  

---

**Setup Instructions:**  
1. Connect the components as per the provided circuit diagram.  
2. Upload the code to the microcontroller using your preferred IDE (Arduino IDE or STM32CubeIDE).  
3. Adjust the potentiometer to manually set the phase angle or rely on the feedback system for automatic control.  
4. Monitor the output voltage stability across the load.  

---

**Future Improvements:**  
- Implement an LCD interface to display real-time parameters such as firing angle and output voltage.  
- Integrate wireless control via Bluetooth or Wi-Fi for remote operation.  
- Add support for inductive loads with phase compensation algorithms.  

---

**Repository Contents:**  
- **Code:** Microcontroller source code for Arduino and STM32.  
- **Schematics:** Circuit diagrams created in Proteus/Altium Designer.  
- **Documentation:** Detailed explanation of the design and working principles.  
- **Simulation Files:** Proteus files for testing and verification.  

---

**License:**  
This project is open-source and available under the [MIT License](https://opensource.org/licenses/MIT).  

---

**Contributions:**  
Feel free to fork this repository, report issues, or submit pull requests to enhance the project!  

---

**Contact:**  
For questions or collaboration, reach out via [LinkedIn](#) or email: example@example.com.  

---
