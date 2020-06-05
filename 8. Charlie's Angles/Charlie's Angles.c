/* Construye un programa que permita ingresar los valores de 2 de los ángulos interiores de
un triángulo, y se emita por pantalla el valor del restante */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    int firstAngle, secondAngle, thirdAngle; 

    puts("The interior angles of a planar triangle always add up to 180 degrees.");
    puts("We'll ask you for two angles and then give you the value of the remaining.\n");

    do {
        firstAngle = 0, secondAngle = 0, thirdAngle = 0;
        puts("Please, enter the first angle:");
        scanf ("%d", &firstAngle);

        while (firstAngle < 1 || firstAngle > 178) {
            puts("\nThe entered value is invalid.");
            puts("Please, enter a valid value for the first angle:");
            scanf ("%d", &firstAngle);
        }

        puts("Please, enter the second angle:");
        scanf ("%d", &secondAngle);
    
        while (secondAngle < 1 || secondAngle > 178) {
            puts("\nThe entered value is invalid.");
            puts("Please, enter a valid value for the second angle:");
            scanf ("%d", &secondAngle);
        }

        thirdAngle = 180 - (firstAngle + secondAngle);

        if (thirdAngle < 1) {         
            puts("The entered values are invalid.\n");
        }
    } while (thirdAngle < 1);
    
    printf("\nThe remaining angle is %d degrees wide.\n\n", thirdAngle);

    system ("pause");
    return 0;
};