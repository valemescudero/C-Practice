#include <stdio.h>
#include <math.h>

void highestF(double a, double b, double c);


int main () {
    double a = 0, b = 0, c = 0; // given numbers
    int option = 0;

    printf("\n Welcome. What would you like to do?\n\n 1 Find the highest of three numbers\n 2 Exit\n\n ");
    scanf("%d", &option);

    do {
        switch (option) {
            case 1:
                printf("\n\n Please, enter three numbers separated with a space:\n ");
                scanf("%lf %lf %lf", &a, &b, &c);
                highestF(a, b, c);
                printf("\n\n Would you like do another test?\n\n 1 Yes\n 2 No (Exit)\n\n ");
                scanf("%d", &option);
                break;
            case 2:
                break;
            
            default:
            printf("Sorry, invalid option.\n What would you like to do?\n\n 1 Find the highest of three numbers\n 2 Exit\n\n ");
            break;
        };
    } while (option != 2);





    return 0;
};

void highestF(double a, double b, double c) {
    if (a == b && b == c) {
        printf("\n All entered numbers are equal.\n"); // If only two are equal this will still print a correct answer:
    } else if (a > b && a > c) {
        printf("\n %f is the highest number.\n", a); // If (b == c) < a prints a
    } else if (b > c) {        
        printf("\n %f is the highest number.\n", b); // If (a == b) > c or if (a == c) < b prints b
    } else {  
        printf("\n %f is the highest number.\n", c); // If (a == b) < c or (a == c) > b or (b == c) > a prints c 
    };
};
