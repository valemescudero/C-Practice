/* Build a program that sums and outputs two given times expressed in hours, minutes and
seconds */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    printf(" WELCOME TO Hour you doing?\n");
    printf(" Given a starting time and a lapse of time, we'll be able to tell you the ending time for your task.\n\n");
    
    int startingTime[3], lapse[3], endingTime[3], days=0;

    do {
        printf(" Please, enter your starting time (24-hour clock/military time),\n including minutes and seconds separated with spaces.\n");
        scanf("%d %d %d", &startingTime[0], &startingTime[1], &startingTime[2]);
        if (startingTime[1]>59 || startingTime[2]>59 || startingTime[1]<0 || startingTime[2]<0 || startingTime[0]<0 || startingTime[0]>=24) {
            printf("\n Sorry, one or more of the entered values is invalid.\n");
        };
    } while (startingTime[1]>59 || startingTime[2]>59 || startingTime[1]<0 || startingTime[2]<0 || startingTime[0]<0 || startingTime[0]>=24);

     do {
       printf("\n Please, enter the lapse of time you'd like to add,\n including minutes and seconds separated with spaces.\n");
        scanf("%d %d %d", &lapse[0], &lapse[1], &lapse[2]);
        if (lapse[1]>59 || lapse[2]>59 || lapse[1]<0 || lapse[2]<0 || lapse[0]<0) {
            printf("\n Sorry, one or more of the entered values is invalid.\n");
        };        
     } while (lapse[1]>59 || lapse[2]>59 || lapse[1]<0 || lapse[2]<0 || lapse[0]<0);
   
    endingTime[2] = startingTime[2] + lapse[2];
    endingTime[1] = startingTime[1] + lapse[1];
    endingTime[0] = startingTime[0] + lapse[0];

    while (endingTime[2]>59) {
        endingTime[1]++;
        endingTime[2] -= 60;
    };
    while (endingTime[1]>59) {
        endingTime[0]++;
        endingTime[1] -= 60;
    };
    while (endingTime[0]>=24) {
        days++;
        endingTime[0] -= 24;
    };
    
    if (days>0) {
        printf("\n The ending time is going to be at:\n %d hours %d minutes %d seconds (24-hour clock/military time) in %d day(s).\n\n", endingTime[0], endingTime[1], endingTime[2], days);
    } else {
        printf("\n The ending time is going to be at:\n %d hours %d minutes %d seconds (24-hour clock/military time).\n\n", endingTime[0], endingTime[1], endingTime[2]);
    };
    system ("pause");
    return 0;
};
