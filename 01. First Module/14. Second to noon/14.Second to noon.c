/* Take a given amount of seconds (integer) and return its equivalent in hours, minutes and seconds
making proper use of quotient and modulus operators for integers */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    int seconds=0, minutes=0, hours=0;
    
    printf("\n Welcome, please enter a number of seconds to calculate how many hours, minutes and seconds it converts to:\n\n");
    do {
        scanf("%d", &seconds);
        if (seconds < 0) {
        printf("\n\n The entered value is invalid. Please enter a positive integer:\n");
        };
    } while (seconds < 0);

    if (seconds >= 60) {
        minutes = seconds/60;
        seconds = seconds%60;
    };
    if (minutes >= 60) {
        hours = minutes/60;
        minutes = minutes%60;
    };
    
    printf(" The entered seconds are equal to %d hour(s), %d minute(s) and %d second(s).\n\n", hours, minutes, seconds);    

    system ("pause");
    return 0;
};
