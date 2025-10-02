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
- Arduino IDE (1.8.19 or later recommended)
- USB cable for flashing and Serial Monitor

---

## Installing ESP8266 on Arduino IDE

1. **Open Arduino IDE**.  
2. Go to **File → Preferences**.  
3. In the **Additional Boards Manager URLs** field, add the following URL:  
