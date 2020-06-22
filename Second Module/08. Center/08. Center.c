/* Desarrolla un algoritmo que le permita leer tres valores A, B y C e indique cuál es valor del
centro (análogo al ejercicio 7). */

#include <stdio.h>
#include <math.h>

void centerF(double a, double b, double c);


int main () {
    double a = 0, b = 0, c = 0; // given numbers
    int option = 0;

    printf("\n Welcome. What would you like to do?\n\n 1 Find the center value from three numbers\n 2 Exit\n\n ");
    scanf("%d", &option);

    do {
        switch (option) {
            case 1:
                printf("\n\n Please, enter three numbers separated with a space:\n ");
                scanf("%lf %lf %lf", &a, &b, &c);
                centerF(a, b, c);
                printf("\n\n Would you like do another test?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
            case 2:
                break;
            
            default:
            printf("Sorry, invalid option.\n What would you like to do?\n\n 1 Find the center value from three numbers\n 2 Exit\n\n ");
            break;
        };
    } while (option != 2);





    return 0;
};

void centerF(double a, double b, double c) {



    if (a == b || b == c || a == c) {
        printf("\n Three different numbers are required for one to be the center value.\n"); // If only two are equal this will still print a correct answer:
    } else if ((c > a && a > b) || (b > a && a > c)) {
        printf("\n %f is the center value.\n", a); 
    } else if ((a > b && b > c) || (c > b && b > a)) {        
        printf("\n %f is the center value.\n", b);
    } else {  
        printf("\n %f is the center value.\n", c);
    };
};
