/* Build a program that asks for the area of a square (in square meters)
and outputs its corresponding perimeter */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    float area = 0, side = 0, perimeter = 0;
    printf("Welcome to Square Time.\n\n");
    printf("    --------\n   |        |\n s |        |\n   |        |\n    --------\n       s\n\n");    
    printf(" To calculate the perimeter of your square,\n please enter its area in cm2 without unit symbols.\n");


    scanf("%f", &area);
    while (area <= 0) {
        printf("\n The entered value is invalid.\n");
        printf(" Please, enter a valid value for the area.\n");
        scanf("%f", &area);
    };

    side = sqrt(area);
    perimeter = side*4;
    printf("\n For a square of %.2f cm2, each side (s) must be %.2f cm long making the perimeter %.2f cm long.\n The perimeter of a geometric shape is obtained by adding the lengths of all its sides.\n In a square this equals four times the length of one of its sides.\n\n", area, side, perimeter);
    printf("\n The area of a square is the same as the square of one of its sides.\n Conversly, the square root of its area will be equal to the length of each side.\n\n");

    system ("pause");
    return 0;
};