/* Build a program that determines whether a given number is POSITIVE, NEGATIVE or ZERO */

#include <stdio.h>
#include <math.h>

void signF(double n);

int main(){
    double n = 0; // given number
    int option = 0;

    printf("\n Welcome. This program can determine whether a given number is POSITIVE, NEGATIVE or ZERO.\n\n");
    printf(" What would you like to do?\n\n 1 Enter a number\n 2 Exit\n\n ");
    scanf("%d", &option);

    do {
        switch (option) {
            case 1:
                printf("\n Please, enter a number:\n ");
                scanf ("%lf", &n);
                signF(n);
                printf("\n\n Would you like to test another number?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
            case 2:
                break;
            default:
                printf(" Sorry, invalid option.");
                printf("\n\n Would you like to test a number?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
        }
    } while (option != 2);
    
    return 0;
};

void signF(double n) {

    if (n == 0) {
        printf("\n The given number %f equals to ZERO.", n);
    } else if (n > 0) {
        printf("\n The given number %f is POSITIVE.", n);
    } else {
        printf("\n The given number %f is NEGATIVE.", n);
    };

};


