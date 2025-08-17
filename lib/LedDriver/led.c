#include "led.h"

static int ledPin; //variable interna de la librería

void LED_Init(int pin) {
    ledPin = pin;
    pinMode(ledPin, OUTPUT);
}

void LED_On () {
    digitalWrite(ledPin, HIGH);
}

void LED_Off() {
    digitalWrite(ledPin, LOW);
}