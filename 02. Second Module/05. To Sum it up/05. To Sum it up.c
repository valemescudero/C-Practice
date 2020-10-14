/* Create a program that can determine whether the sum of a set of given numbers is EVEN or ODD */


#include <stdio.h>
#include <math.h>

void evenF(double n);
void sumF(double a, double b);

int main(){
    double a = 0, b = 0; // given number
    int option = 0;

    printf("\n Welcome. This program can determine whether the sum of a set of given numbers is EVEN or ODD.\n\n");
    printf(" What would you like to do?\n\n 1 Enter a set of numbers\n 2 Exit\n\n ");
    scanf("%d", &option);

    do {
        switch (option) {
            case 1:
                printf("\n Please, enter a set of numbers:\n ");
                scanf ("%lf %lf", &a, &b);
                sumF(a, b);
                printf("\n\n Would you like to test another set of numbers?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
            case 2:
                break;
            default:
                printf("\n Sorry, invalid option.");
                printf("\n\n Would you like to test a set of numbers?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
        }
    } while (option != 2);
    
    return 0;
};

void sumF(double a, double b) {
    double n = 0;
    n = a + b;
    evenF(n);
}

void evenF(double n) {

    if (fmod(n,2) == 0) {
        printf("\n The sum of the given numbers (%f) is EVEN.", n);
    } else {
        printf("\n The sum of the given numbers (%f) is ODD.", n);
    };

};


