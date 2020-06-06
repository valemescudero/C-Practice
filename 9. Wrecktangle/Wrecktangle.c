/* Construye un programa que permita ingresar las medidas de los lados de un rectángulo; el
mismo debe emitir por pantalla su superficie y su perímetro */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    float base = 0, height = 0, perimeter = 0, area = 0;
    printf("Welcome to Wrecktangle.\n\n");
    printf("    ----------\n   |          |\n h |          |\n   |          |\n    ----------\n      b\n\n");    
    printf("To calculate the perimeter and area of your rectangle,\nplease enter the length of the base (b) without unit symbols.\n");


    scanf("%f", &base);
    while (base < 1) {
        printf("\nThe entered value is invalid.\n");
        printf("Please, enter a valid value for the base.\n");
        scanf("%f", &base);
    }
    
    printf("\nNow enter its height (h) in the same unit but without unit symbols.\n");
    scanf("%f", &height);
    while (height < 1) {
        printf("\nThe entered value is invalid.\n");
        printf("Please, enter a valid value for the height.\n");
        scanf("%f", &height);
    }

    perimeter = (base*2)+(height*2);
    area = base*height;
    printf("\nThe perimeter of your rectangle is %.2f units.\n The perimeter of a geometric shape is obtained by adding the lengths of all its sides.\n In a rectangle this equals the sum of the doubles for both the height and base.\n\n", perimeter);
    printf("\nThe area of your rectangle is %.2f units square.\nThe area of a rectangle is calculated by multiplying its height by its base.\n\n",  area);

    system ("pause");
    return 0;
};