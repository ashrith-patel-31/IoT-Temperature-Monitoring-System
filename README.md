# IoT-Based Temperature Monitoring and Overheat Alert System Using Arduino

## 📖 Project Overview

This project was developed as part of the **CodeAlpha Internet of Things (IoT) Internship Program**.

The system continuously monitors environmental temperature using a **TMP36 Temperature Sensor** and displays the measured value on a **16×2 LCD Display**. Whenever the temperature exceeds a predefined threshold value of **30°C**, the system automatically activates an **LED** and a **Buzzer** to provide visual and audio alerts.

The project was successfully designed and simulated using **Tinkercad Circuits**, demonstrating the fundamentals of IoT monitoring systems, sensor interfacing, embedded programming, and real-time alert generation.

---

# 🎯 Objectives

* Monitor temperature in real time.
* Display temperature readings on an LCD screen.
* Generate visual alerts using an LED.
* Generate audio alerts using a buzzer.
* Understand sensor interfacing with Arduino.
* Gain practical exposure to IoT system design.
* Simulate an embedded monitoring system without physical hardware.

---

# 🛠 Components Used

| Component                | Quantity |
| ------------------------ | -------- |
| Arduino Uno              | 1        |
| TMP36 Temperature Sensor | 1        |
| 16×2 LCD Display         | 1        |
| LED                      | 1        |
| Buzzer                   | 1        |
| Breadboard               | 1        |
| Jumper Wires             | Several  |
| 220Ω Resistors           | 2        |

---

# 🧩 Block Diagram

```text
TMP36 Temperature Sensor
          │
          ▼
     Arduino Uno
          │
 ┌────────┼────────┐
 ▼        ▼        ▼
LCD      LED    Buzzer
Display Alert   Alarm
```

---

# ⚙ Working Principle

1. The TMP36 sensor continuously measures the surrounding temperature.
2. Arduino Uno reads the analog signal from the sensor through pin A0.
3. The measured temperature is converted into degrees Celsius.
4. The LCD displays the current temperature and system status.
5. If temperature exceeds 30°C:

   * LED turns ON.
   * Buzzer turns ON.
   * LCD displays **WARNING HOT**.
6. If temperature is below 30°C:

   * LED remains OFF.
   * Buzzer remains OFF.
   * LCD displays **SAFE**.

---

# 🔌 Circuit Connections

## TMP36 Temperature Sensor

* Left Pin → 5V
* Middle Pin → A0
* Right Pin → GND

## LCD Display

* RS → Pin 12
* E → Pin 11
* D4 → Pin 5
* D5 → Pin 4
* D6 → Pin 3
* D7 → Pin 2

## LED

* Positive Terminal → Pin 13
* Negative Terminal → GND through 220Ω resistor

## Buzzer

* Positive Terminal → Pin 8
* Negative Terminal → GND

---

# 📊 Simulation Results

## Normal Temperature (25°C)

* LCD displays temperature and SAFE status.
* LED remains OFF.
* Buzzer remains OFF.

## High Temperature (35°C)

* LCD displays temperature and WARNING HOT status.
* LED turns ON.
* Buzzer turns ON.

The simulation successfully demonstrated automatic temperature monitoring and alert generation.

---

# 🚀 Applications

* Smart Home Temperature Monitoring
* Industrial Safety Systems
* Server Room Monitoring
* Greenhouse Monitoring
* Healthcare Storage Monitoring
* Research Laboratory Monitoring
* Educational IoT Demonstrations

---

# ✅ Advantages

* Real-time monitoring
* Low implementation cost
* Easy to understand and implement
* Reliable operation
* Visual and audio alert mechanism
* Suitable for IoT learning and experimentation

---

# 🔮 Future Enhancements

* ESP8266/ESP32 Wi-Fi Integration
* Cloud-Based Monitoring
* Mobile Application Support
* SMS and Email Notifications
* Data Logging and Analytics
* Multi-Sensor Monitoring System
* Smart Home Automation Integration

---

# 💻 Software Used

* Tinkercad Circuits
* Arduino IDE

---

# 📷 Project Screenshots

### Circuit Diagram

(Add Circuit_Diagram.png)

### Temperature = 25°C (SAFE)

(Add Temperature_25C_SAFE.png)

### Temperature = 35°C (WARNING HOT)

(Add Temperature_35C_WARNING.png)

### Serial Monitor Output

(Add Serial_Monitor_Output.png)

---

# 🔗 Project Links

## Tinkercad Simulation

[View Tinkercad Project](https://www.tinkercad.com/things/cE4OpIIlpL9/editel?returnTo=%2Fdashboard&sharecode=9RLnfIC5E7tadKm_C4xTYHUGb9ee4XsHye3ejqeyHAY)

## Arduino Source Code

[View Arduino Code](./Arduino_CodeArduino_Code.ino)

## Project Report

[View Project Report](./Report/Project_Report.pdf)


---

# 👨‍💻 Author

**Akula Ashrith Patel**
