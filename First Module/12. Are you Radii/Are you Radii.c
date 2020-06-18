/* Develop an algorithm that reads a radius of a circle and calculates and outputs the area */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    float radius = 0, area = 0, PI = 3.14159;
    printf("\n Are you Radii?\n Enter the Radius of Circle in cm: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("\n\n Area of Circle is = %f cm2\n\n", area);

   
    system ("pause");
    return 0;
};
