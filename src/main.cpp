#include "led.h" //Se manda a llamar Mi libreria

void setup () {
    LED_Init(13); //Configuracion del Pin 13
}

void loop(){
    LED_On();
    delay(1000);
    LED_Off();
    delay(1000);
}