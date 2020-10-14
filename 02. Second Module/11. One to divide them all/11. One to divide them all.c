/* Develop a program that reads three values and indicates
whether any of the three can perfectly divide the others */

#include <stdio.h>
#include <math.h>

void divisibleF(double, double, double);

int main(){
    double a = 0, b = 0, c = 0; // given numbers
    int option = 0;

    printf("\n Welcome. This program can determine whether any of three numbers is divisible by any of the rest.\n\n");
    printf(" What would you like to do?\n\n 1 Enter a number\n 2 Exit\n\n ");
    scanf("%d", &option);

    do {
        switch (option) {
            case 1:
                printf("\n Please, enter three numbers separated by spaces:\n ");
                scanf ("%lf %lf %lf", &a, &b, &c);
                printf("\n");
                divisibleF(a, b, c);
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

void divisibleF(double a, double b, double c) {

    if (a == b && b == c) {
        printf("\n All three numbers are the same value.\n All numbers are divisible by themselves.\n");
    } else if (fmod(b, a) == 0 && fmod(c, a) == 0) {
        printf("\n Number %f can divide both %f and %f perfectly.\n", a, b, c);
    } else if (fmod(c, b) == 0 && fmod(a, b) == 0) {
        printf("\n Number %f can divide both %f and %f perfectly.\n", b, a, c);
    } else if (fmod(a, c) == 0 && fmod(b, c) == 0) {
        printf("\n Number %f can divide both %f and %f perfectly.\n", c, a, b);
    } else {
        printf("\n None of the entered numbers can perfectly divide the other two.");
    };
};


