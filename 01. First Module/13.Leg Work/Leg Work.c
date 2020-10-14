/* Calculate the hypotenuse of a right triangle given the length of its two legs with
the corresponding algorithms. */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    float leg[2], hypotenuse =0;
    printf("\n A right triangle consists of two legs and a hypotenuse.\n The two legs meet at a 90 degrees angle.\n The hypotenuse is the longest side of the right triangle and\n is the side opposite the right angle.\n");
    printf("\n According to Pythagoras' Theorem:\n In a right angled triangle the square of the hypotenuse (h)\n is equal to the sum of the squares of the other two sides.\n\n");
    printf("\n We'll ask you for the lengths of both legs and tell you the corresponding value for the hypotenuse.\n");
    do {
        printf(" Please, enter the length of each leg separated with spaces.\n");
        scanf("%f %f", &leg[0], &leg[1]);
        if (leg[0] <=0 || leg[1] <= 0) {
            printf(" The entered values are invalid. Please enter values greater than 0.\n");

        };
    } while (leg[0] <=0 || leg[1] <= 0);
    
    hypotenuse = sqrt((leg[0]*leg[0]) + (leg[1]*leg[1]));
    printf("The hypotenuse for a right triangle whose sides are %.2f and %.2f is %.2f (aprox).\n\n", leg[0], leg[1], hypotenuse);
   
    system ("pause");
    return 0;
};
