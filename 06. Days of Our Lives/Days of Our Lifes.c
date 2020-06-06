/* Build a program that asks for your age in years and returns the equivalent of days lived */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    int years, days, leap;

    puts("'...like sands through an hourglass...' Welcome to DAYS OF OUR LIVES!");
    puts("Enter your age to find out how many days have passed since you were born!");
    scanf ("%i", &years);

    leap = years/4;
    days = years * 365 + leap;

    if (years<1) {
        printf("\nEither you are too young for our system to calculate\nor you haven't been born yet... who knows!\n\n");
    } else {
        printf("\nYou are about %i days old!\n\n", days);
    };

    system ("pause");
    return 0;
};