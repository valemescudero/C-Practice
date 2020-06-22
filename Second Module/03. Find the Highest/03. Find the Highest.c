/* Create an algorithm that can determine which of two given numbers is the highest.*/

#include <stdio.h>
#include <math.h>

void highestF(double a, double b);

int main(){
    double a = 0, b = 0; // given numbers
    int option = 0;

    printf("\n Welcome. This program can determine which of two given numbers is the highest.\n\n");
    printf(" What would you like to do?\n\n 1 Enter a set of numbers\n 2 Exit\n\n ");
    scanf("%d", &option);

    do {
        switch (option) {
            case 1:
                printf("\n Please, enter two numbers separated by a space:\n ");
                scanf ("%lf %lf", &a, &b);
                highestF(a, b);
                printf("\n\n Would you like to test another set of numbers?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
            case 2:
                break;
            default:
                printf(" Sorry, invalid option.");
                printf("\n\n Would you like to test a set of numbers?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
        }
    } while (option != 2);
    
    return 0;
};

void highestF(double a, double b) {
    
    if (a == b) {
        printf("\n The given numbers %f and %f are equal.", a, b);
    } else if (a > b) {
        printf("\n %f is higher than %f.", a, b);
    } else {
        printf("\n %f is higher than %f.", b, a);
    };

};


