# LedDriver-Library (AVR C / PlatformIO)

## Overview

This project is a simple LED blinking library written in **pure C** for **AVR ATmega microcontrollers**, developed using **PlatformIO** instead of the Arduino IDE.

The purpose of this project is to allow a programmer to **program Arduino/ATmega devices directly in C**, without relying on Arduino-style C++ libraries or the Arduino IDE environment.

This project is mainly for learning, practicing **embedded C**, and understanding how AVR microcontrollers work at a lower level while still using the Arduino toolchain through PlatformIO.

---

## Project Purpose

Many Arduino projects rely heavily on the Arduino IDE and C++ libraries.
This project was created to:

* Practice **pure C programming**
* Work directly with **AVR registers**
* Avoid Arduino IDE
* Use **PlatformIO as build system**
* Create small reusable C libraries for AVR
* Program ATmega microcontrollers like a standard embedded system
* Understand low-level microcontroller programming

This is closer to **embedded systems development** than traditional Arduino programming.

---

## Technologies Used

* C (not Arduino C++)
* AVR ATmega (ATmega328P, etc.)
* PlatformIO
* Arduino framework (only as toolchain)
* AVR-GCC
* Embedded programming
* Register-level programming

---

## How It Works

Instead of using Arduino functions like:

```
digitalWrite()
pinMode()
delay()
```

This project interacts directly with AVR registers such as:

```
DDRB
PORTB
PINB
TCCR
```

This allows more control, faster execution, and better understanding of the hardware.

---

## Example – Simple LED Blink

Example of blinking an LED using register manipulation in C:

```c
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= (1 << PB5); // Set pin 13 as output

    while (1)
    {
        PORTB ^= (1 << PB5); // Toggle LED
        _delay_ms(1000);
    }
}
```

---

## Project Structure

```
LedDriver-Library
│
├── include/
│   └── led_driver.h
│
├── src/
│   └── led_driver.c
│
├── platformio.ini
└── README.md
```

---

## Why PlatformIO

PlatformIO allows:

* Building AVR projects without Arduino IDE
* Using pure C or C++
* Better project structure
* Library management
* Version control integration
* Professional embedded workflow

This makes development closer to real embedded systems development.

---

## Future Improvements

Possible future improvements:

* Timer-based delays
* PWM LED control
* Multiple LED support
* Button input library
* UART communication library
* SPI / I2C drivers
* LCD driver
* EEPROM driver
* Interrupt handling examples
* Bare-metal ATmega framework

---

## Who Is This Project For?

This project is useful for:

* Embedded systems students
* Arduino users who want to learn low-level programming
* C programmers learning microcontrollers
* AVR development without Arduino IDE
* Embedded firmware practice
* PlatformIO users

---

## Author

**Alex Hermosillo**
Embedded Systems | Electronics | Software | Automation | AVR | PlatformIO

GitHub: https://github.com/Alexhillow
