# Booth's Algorithm on ESP8266

This project demonstrates **Booth's Algorithm for signed binary multiplication** implemented on an ESP8266 microcontroller.  
The program reads two integers (multiplicand and multiplier) from the **Serial Monitor**, executes Booth’s Algorithm step by step, and prints the results in a tabular format.

---

## Features
- Runs Booth's Algorithm for signed multiplication.
- Takes **user input** (multiplicand and multiplier) via Serial Monitor.
- Displays step-by-step execution:
  - Accumulator (A)
  - Multiplier (Q)
  - Q-1 register
- Shows intermediate cases (`A = A - M` or `A = A + M`) depending on Booth’s rules.
- Prints the **final multiplication result**.

---

## Requirements
- ESP8266 board (NodeMCU, Wemos D1 Mini, etc.)
- Arduino IDE (with ESP8266 board support installed)
- USB cable for flashing and Serial Monitor

---

## How to Use
1. Open the code in Arduino IDE.  
2. Select the correct **Board** (e.g., NodeMCU 1.0) and **Port**.  
3. Upload the sketch to your ESP8266.  
4. Open **Serial Monitor** at `115200 baud`.  
5. Enter two integers (separated by space or newline), e.g.:
