#ifndef LED_H
#define LED_H

#include <Arduino.h>

#ifdef __cplusplus

extern "C" {

#endif


//inicializa el LED en un pin
void LED_Init (int pin);

//Enciende el LED
void LED_On();

//apaga el LED
void LED_Off();
#ifdef __cplusplus
}

#endif

#endif
