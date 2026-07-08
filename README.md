# 🛵 Smart Helmet Detection and Alcohol Detection with Ignition Control

## 📌 Project Overview

This project is an embedded systems application developed using the **AT89C51 microcontroller**, **Embedded C**, **Keil uVision4**, and **Proteus 8 Professional**.

The system enhances rider safety by allowing vehicle ignition only when:

- ✅ The rider is wearing a helmet.
- ✅ No alcohol is detected.

If either condition fails, the ignition remains OFF and warning indications are provided through the LCD, LEDs, and buzzer.

---

## 🎯 Objectives

- Detect helmet usage.
- Detect alcohol consumption.
- Control vehicle ignition automatically.
- Improve rider safety.

---

## 🛠️ Hardware Components

- AT89C51 Microcontroller
- 16×2 LCD
- BC547 Transistor
- 5V Relay
- DC Motor
- Green LED
- Red LED
- Buzzer
- Crystal Oscillator
- Push Buttons (Simulation)
- 1N4007 Diode
- 10kΩ Resistors
- 10k Potentiometer

---

## 💻 Software Used

- Embedded C
- Keil uVision4
- Proteus 8 Professional

---

## ⚙️ Working Principle

### Safe Condition

✔ Helmet Worn

✔ No Alcohol

➡ Ignition ON

➡ Green LED ON

➡ LCD displays:

SAFE TO RIDE

IGNITION ON

---

### Helmet Not Worn

➡ Ignition OFF

➡ Red LED ON

➡ Buzzer ON

➡ LCD displays:

WEAR HELMET

IGNITION OFF

---

### Alcohol Detected

➡ Ignition OFF

➡ Red LED ON

➡ Buzzer ON

➡ LCD displays:

ALCOHOL DETECTED

---

## 📂 Repository Contents

- Source Code
- Proteus Files
- Simulation Video
- Images
- Project Report

---

## 🚀 Future Scope

- MQ-3 Alcohol Sensor
- Helmet IR Sensor
- GSM Alerts
- GPS Tracking
- IoT Monitoring
- Fingerprint Authentication

---

## 👩‍💻 Author

**Anaparthi Gnana Kusuma**

Electronics and Communication Engineering (ECE)


## 🎥 Simulation Video

Please open **Simulation.mp4** in this repository to watch the complete project demonstration.

https://github.com/user-attachments/assets/7e35323f-5b09-4a70-81d9-e172b29da0e1


