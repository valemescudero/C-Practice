/* Desarrolla un algoritmo que le permita leer tres valores A, B y C e indicar si uno de los tres
divide a los otros dos exactamente. */

#include <stdio.h>
#include <math.h>

void divisibleF(double, double, double);
void divisionF(double, double, int*, int*);

int main(){
    double a = 0, b = 0, c = 0; // given numbers
    int option = 0;

    printf("\n Welcome. This program can determine whether any of three numbers is divisible by any of the rest.\n\n");
    printf(" What would you like to do?\n\n 1 Enter a number\n 2 Exit\n\n ");
    scanf("%d", &option);

    do {
        switch (option) {
            case 1:
                printf("\n Please, enter three numbers separated by a space:\n ");
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
    int none, duplicate;
    divisionF(a, b, &none, &duplicate);
    divisionF(b, c, &none, &duplicate);
    divisionF(c, a, &none, &duplicate);
    if (none == 1) {
        printf("\n None of the numbers entered is divisible by any of the others.\n\n");
    };

};

void divisionF(double n, double n2, int* none, int* dup) {
    if (n == n2) {
        if (*dup != n) { 
            *dup = n;
            printf("\n %f is divisible by %f because all numbers are divisible by themselves.\n", n, n2);
            *none = 0;
        };
    } else {
        if (fmod(n,n2) == 0) {
            int quot = n/n2;
            printf("\n %f is divisible by %f (quotient = %d).\n", n, n2, quot);
            *none = 0;
        };
        if (fmod(n2,n) == 0) {
            int quot = n2/n;
            printf("\n %f is divisible by %f (quotient = %d).\n", n2, n, quot);
            *none = 0;
        };
    };
};


