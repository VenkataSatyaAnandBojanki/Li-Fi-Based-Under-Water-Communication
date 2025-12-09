# 📡 LI-FI Based Underwater Communication System
### *A High-Speed, Secure, Optical Wireless Data Communication Approach for Underwater Applications*

---

## 📝 Abstract
Underwater wireless communication using radio waves suffers major limitations due to high attenuation and low data rate. This project proposes a **LI-FI (Light-Fidelity) based underwater communication system** that uses **visible light** as the transmission medium. The transmitter encodes data into high-frequency LED light pulses, and the receiver retrieves the information using a photodiode. The system provides a low-cost, high-speed, and EMI-free communication solution for short-range underwater environments.

---

## 🎯 Project Objective
- To transmit digital data underwater using **visible light**  
- To build a reliable **LED + Photodiode communication link**  
- To provide safer, faster communication compared to **RF or acoustic** systems  
- To analyze real-time performance: range, clarity, and signal accuracy  

---

## 🔧 Hardware Requirements
| Component | Description |
|----------|-------------|
| **High-intensity LED** | Light transmitter (LI-FI source) |
| **Photodiode / LDR** | Light receiver |
| **Resistors (220Ω, 1kΩ)** | Biasing & signal conditioning |
| **BC547 / 2N2222 Transistor** | Amplification |
| **Capacitors** | Filtering |
| **Arduino / Microcontroller** | Data encoding & decoding |
| **Water Tank / Aquarium** | Underwater medium |

---

## 🧠 Working Principle
1. Data is sent from the transmitter Arduino.  
2. Data is converted into **light pulses** using an LED.  
3. Light travels underwater and is detected by the **photodiode**.  
4. The received signal is amplified and filtered.  
5. Arduino decodes the pulses and reconstructs original data.  
6. Output is shown on **Serial Monitor / LCD**.

---

## 🖼️ Block Diagram




---

## 🔍 Why LI-FI for Underwater?
| Parameter | RF Communication | Acoustic Communication | **LI-FI (Proposed)** |
|-----------|------------------|------------------------|-----------------------|
| Speed | Low | Medium | **High** |
| Range | Medium | Long | Short |
| Cost | High | High | **Low** |
| EMI | High | Medium | **Zero** |
| Security | Low | Medium | **Very High** |

---

## 💡 Key Features
- High-speed underwater data transmission  
- EMI-free operation  
- Highly secure due to directional light  
- Low power consumption  
- Low-cost hardware  
- Easy deployment & portable  

---

## 📈 Methodology
### **Transmitter Section**
- Arduino generates digital data  
- LED switches ON/OFF at high frequency  
- Transistor amplifies LED drive current  

### **Receiver Section**
- Photodiode detects variations in light intensity  
- Signal is amplified  
- Filter removes noise  
- Arduino decodes the bit stream  

---

## 🧪 Experimental Setup
- Water tank (1–2 m)
- LED submerged on one side  
- Photodiode submerged on opposite side  
- Low ambient light environment  
- Arduino Serial Monitor for output  

---

## 📊 Results
- Underwater data successfully transmitted  
- Range achieved: **~1 meter** in clear water  
- Higher accuracy using **focused LED / laser**  
- Data rate significantly higher than underwater RF techniques  

---

## 🚀 Applications
- Underwater robots & drones  
- Submarine short-distance communication  
- Oceanographic data logging  
- Diver-to-diver communication  
- Underwater IoT sensor networks  

---

## 🔮 Future Scope
- Multi-color (RGB) LED-based modulation  
- Increase range with optical lenses  
- Implement Manchester or error-correction encoding  
- Full-duplex LI-FI communication  
- High-power LED arrays  

---

## 🙏 Acknowledgements
This project was guided by:  
**Mr. K. S. V. Ramanaji**  
Assistant Professor, NSRIT

---

---

## ▶️ How to Run the Code
1. Build the TX and RX circuits.  
2. Upload `transmitter.ino` to TX Arduino.  
3. Upload `receiver.ino` to RX Arduino.  
4. Submerge LED and photodiode underwater facing each other.  
5. Open Serial Monitor at **9600 baud**.  
6. Send data from TX side → observe at RX output.

---




