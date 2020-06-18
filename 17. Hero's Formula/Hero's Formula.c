/* Develop an algorithm that allows the calculation of the area of a triangle working with the lengths
of all of its sides from input */

#include <stdio.h>
#include <math.h>


int main () {
    float a = 0, b = 0, c = 0; // the three legs of the triangle
    float s = 0;
    float A = 0;

    printf("\n Heron's formula (sometimes called Hero's formula), named after Hero of Alexandria,\n gives the area of a triangle when the length of all three sides are known.\n Unlike other triangle area formulae, there is no need to calculate angles\n or other distances in the triangle first.\n\n");
    printf(" Please, enter the lengths of all three sides separated by a space:\n ");

    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c)/2;  // semi-perimeter
    A = sqrt(s*(s-a)*(s-b)*(s-c)); // Heron's formula / Area

    printf("\n \n The area of the triangle for the given sides' length is: %.2f square.\n\n ", A);

    system ("pause");
    return 0;
};