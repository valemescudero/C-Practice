/* Build a program that can determine whether, from a set of given numbers, the highest is divisible by the lowest. */

#include <stdio.h>
#include <math.h>

void divisibleF(double highest, double lowest);
void highestF(double a, double b);

int main(){
    double a = 0, b = 0; // given numbers
    int option = 0;

    printf("\n Welcome. This program can determine whether, from a set of given numbers,\n the highest is divisible by the lowest or if there is a reminder.\n\n");
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
    double highest = 0, lowest = 0;

    if (a > b) {
        highest = a;
        lowest = b;
        divisibleF(highest, lowest);
    } else if (b > a) {
        highest = b;
        lowest = a;        
        divisibleF(highest, lowest);
    } else {
        printf("\n\n Both numbers are equal and thus, devisible.\n");
    };
};

void divisibleF(double highest, double lowest) {

    if (fmod(highest, lowest) == 0) {
        printf("\n The higher number (%f) is divisible by the lowest (%f).\n\n", highest, lowest);
    } else {
        printf("\n The higher number (%f) is not divisible by the lowest (%f).\n Its reminder is %f.\n\n", highest, lowest, fmod(highest, lowest));
    };
};


