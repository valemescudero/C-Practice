/* Build a program that asks for two real numbers and then shows their quotient. */


#include <stdio.h>
#include <math.h>

void quotientF(double a, double b);


int main() {
    double a = 0, b = 0; // given numbers
    int option = 0;

    printf("\n Welcome. What would you like to do?\n\n 1 Find quotient of a set of numbers\n 2 Exit\n\n ");
    scanf("%d", &option);

    do {
        switch (option) {
            case 1:
                printf("\n\n Please, enter two numbers separated with a space:\n ");
                scanf("%lf %lf", &a, &b);
                quotientF(a, b);
                printf("\n\n Would you like to test another set of numbers?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
            case 2:
                break;
            
            default:
            printf("Sorry, invalid option.\n What would you like to do?\n\n 1 Find quotient of a set of numbers\n 2 Exit\n\n ");
            break;
        };
    } while (option != 2);
    
    return 0;
};

void quotientF(double a, double b){
    double q = 0;

    if (b == 0) {
        printf("\n\n Error. Division by zero is undefined for real numbers.\n The product 0 by any number is the same so the number cannot be recovered by\n inverting the process of multiplication.\n");
    } else {
        q = a/b;
        printf("\n\n The quotient for %f divided by %f is %f.\n", a, b, q);
    };
};