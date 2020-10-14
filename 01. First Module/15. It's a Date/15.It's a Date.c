/* Return a given DDMMYYYY date split into Day, Month and Year working with arithmetic operators */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    int day = 0, month = 0, year = 0;
    int date = 0, ok = 0;

    do {       
        printf("\n Please, enter date (DDMMYYYY format): \n\n");
        scanf("%d",&date);
        day = date/1000000;
        date = date%1000000;
        month = date/10000;
        year = date%10000;

        // Valid vars
        if (month < 1 || month > 12 || day < 0 || day > 31) {
            if (month < 1 || month > 12) {
                printf ("\n Invalid month. Entered value was greater than 12 or lower than 1.\n\n");
            };
            if (day < 0 || day > 31) {
                printf ("\n Invalid day. Entered value was greater than 31 or lower than 1.\n\n");
            };
            if (date%10000 < 1) {
                printf("\n Invalid year.\n\n");
            };
        } else {
            switch (month) {
                // Leap year validation
                case 2:
                    if (day > 29 || (day > 28 && (year%4 != 0 || (year%100 == 0 && year%400 != 0)))) {
                        printf ("\n Invalid day. Either the entered year is not a Leap Year or the day value was greater than 29.\n\n");
                    } else {
                        ok = 1;
                    };
                    break;

                case 4:
                case 6:
                case 9:
                case 11:
                    if (day > 30) {
                        printf ("\n Invalid date. Entered month has only 30 days. Please check day and month are correct.\n\n");
                    } else {
                        ok = 1;
                    };
                    break;

                default :
                        ok = 1;
            };
        };

    } while (ok != 1);
    
    printf("\n The entered date is %d %d %d.\n\n", day, month, year);
    system ("pause");
    return 0;
};
