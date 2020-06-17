/* Desarrolla un algoritmo que permita leer un valor que represente una temperatura
expresada en grados Celsius y convierta dicho valor en un valor expresado en grados
Fahrenheit.*/


#include <stdio.h>
#include <math.h> 
float celsius = 0, fahrenheit = 0;  

int main () { 
    printf("Welcome. Please enter Celsius (*C) to convert to Fahrenheit (*F)");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius*1.8000)+32.00;

    printf("\n %f * Celsius converts to %f * Fahrenheit.\n\n", celsius, fahrenheit);
    system ("pause");
    return 0;
};
