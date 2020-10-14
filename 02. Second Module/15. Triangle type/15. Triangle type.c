/* Build a program that, having asked for three segment lengths, determines :
a) if a triangle is possible between them
b) if the possible triangle is Equilateral, Isosceles or Scalene) */

#include <stdio.h>

int triangleF(double, double, double);

int main () {
    double sideA = 0, sideB = 0, sideC = 0;
    char option = '0';
    int triangleType = 0;

    printf(" WELCOME. Enter three side lengths and test if a triangle is posible with them.\n\n");

    do {
        printf(" What would you like to do?\n\n 1 Try for a triangle\n 2 Exit\n ");
        scanf("%c",  &option);
        fflush(stdin);

        switch (option) {
        case '1':
            printf("\n Please, enter all three side lengths separated by spaces:\n ");
            scanf("%lf %lf %lf", &sideA, &sideB, &sideC);
            fflush(stdin);

            triangleType = triangleF(sideA, sideB, sideC);
            
            switch (triangleType) {
            case 0:
                break;
            case 1:
                printf("\n Triangle type is Equilateral.\n\n");
                break;
            case 2:
                printf("\n Triangle type is Isosceles.\n\n");
                break;
            case 3:
                printf("\n Triangle type is Scalene.\n\n");
                break;
            default:
                printf("\n Unexpected error.\n\n");
                break;
            };
            break;
        case '2':
        break;

        default:
            printf("\n Sorry, invalid option.\n");
            break;
        };
    } while (option != '2');

    return 0;
};


int triangleF(double sideA, double sideB, double sideC) {

    if (sideA <=0 || sideB <=0 || sideC <=0 || sideA+sideB<sideC || sideB+sideC<sideA || sideC+sideA<sideB) {
        printf("\n A triangle is not possible.\n\n");
        return 0;
    } else {
        printf("\n A triangle is possible.");
        if (sideA == sideB && sideB == sideC) {
            return 1;
        } else if (sideA != sideB && sideB != sideC && sideC != sideA) {
            return 3;
        } else {
            return 2;
        };
    };


};