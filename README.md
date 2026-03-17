# 🚦 Arduino Traffic Light Project

A simple traffic light simulation using an Arduino.  
This project demonstrates **timing control with `millis()`**, **state management**, and **LED control** without using `delay()`, making it efficient and non-blocking.

---

## 🛠 Components Needed

| Component             | Quantity | Notes                             |
|----------------------|---------|----------------------------------|
| Arduino Uno           | 1       | Any Arduino compatible board works |
| LED (Red)             | 1       | With appropriate resistor (220Ω) |
| LED (Yellow)          | 1       | With resistor                     |
| LED (Green)           | 1       | With resistor                     |
| Resistor              | 3       | 220Ω recommended                  |
| Breadboard & Jumper Wires | As needed | For connections                  |

---

## 🔌 Circuit Diagram

[Arduino] [LEDs]
Pin 8 ----------> Red LED (via 220Ω)
Pin 9 ----------> Yellow LED (via 220Ω)
Pin 10 ----------> Green LED (via 220Ω)
GND ------------> Common Ground


> **Tip:** Connect the **short leg of LEDs** to GND.

---

## 💻 Code Features

- Uses **`millis()`** for non-blocking timing
- Implements **state machine** for traffic light sequence
- Easily extendable for multiple traffic lights
- Clean and organized code with constants for pin assignments

---

## ⏱ How It Works

1. Red LED turns on → 1 second  
2. Yellow LED turns on → 1 second  
3. Green LED turns on → 1 second  
4. Cycle repeats indefinitely

> No `delay()` is used, so you can add additional tasks while the lights run.

---

## 📁 File Structure
traffic-light-arduino/
├── traffic_light.ino
└── README.md


- `traffic_light.ino` → Main Arduino code  
- `README.md` → Project description and instructions

---

## 🔧 Instructions to Run

1. Connect the LEDs to the pins as described above  
2. Upload the `traffic_light.ino` sketch to your Arduino  
3. Open the Arduino IDE Serial Monitor if you want to add debug messages (optional)  
4. Watch the traffic light cycle automatically

---

## 🚀 Improvements & Ideas

- Add **push-button control** to manually change lights  
- Integrate **buzzer** for pedestrian crossing  
- Extend to **two-way traffic lights** with synchronized states  
- Add **IoT features** with ESP32 or ESP8266

---

## 📜 License

This project is open-source. Feel free to **fork, modify, and use it** for learning purposes.

---

> Made with ❤️ by Martinsz09
