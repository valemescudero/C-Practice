/* Develop an algorithm that ask for a number and prints whether the given number is EVEN or ODD */

#include <stdio.h>
#include <math.h>

void evenF(double n);

int main(){
    double n = 0; // given number
    int option = 0;

    printf("\n Welcome. This program can determine whether a given number is EVEN or ODD.\n\n");
    printf(" What would you like to do?\n\n 1 Enter a number\n 2 Exit\n\n ");
    scanf("%d", &option);

    do {
        switch (option) {
            case 1:
                printf("\n Please, enter a number:\n ");
                scanf ("%lf", &n);
                evenF(n);
                printf("\n\n Would you like to test another number?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
            case 2:
                break;
            default:
                printf("\n Sorry, invalid option.");
                printf("\n\n Would you like to test a number?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
        }
    } while (option != 2);
    
    return 0;
};

void evenF(double n) {

    if (fmod(n,2) == 0) {
        printf("\n The given number %f is EVEN", n);
    } else {
        printf("\n The given number %f is ODD", n);
    };

};


