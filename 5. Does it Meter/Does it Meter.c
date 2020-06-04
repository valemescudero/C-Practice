/* Develop an algorithm that returns for the given centimeters (float input)
its equivalent in feet (integer) and inches (float, 1 space after decimal point) */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    float cm, inches, cmToFt;
    int ft;

    puts("Welcome to the UNIT CONVERTER (centimeters to feet and inches)");
    puts("Please, enter the measure in centimeters without the unit symbol.");
    scanf ("%f", &cm);

    inches = (float)cm/2.54;
    cmToFt = cm/30.48;
    ft = (int)cmToFt;
    if (cm>30.48) {
        printf("\n%.2f converts to %.1f inches or %i feet. \n\n", cm, inches, ft);
    } else {
        printf("\n%.2f converts to %.1f inches or less than a foot. \n\n", cm, inches);
    };

    system ("pause");
    return 0;
};