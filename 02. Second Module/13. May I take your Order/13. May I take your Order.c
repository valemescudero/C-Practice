/* Given three integers, the program should indicate whether they are arranged
in ascending or descending order or not at all */


#include <stdio.h>

int ascendF(int, int, int);
int decrescF(int, int, int);

int main() {

    int a = 0, b = 0, c = 0;
    char option = '0';
    printf("\n Welcome. Given three integer values, this program will tell you whether they are\n in ascending or descending order if applicable.\n\n");

    do {
        printf(" Please, select an option:\n\n 1 Test a set of numbers\n 2 Exit\n ");
        scanf("%c", &option);
        fflush(stdin);

        switch (option) {
        case '1':
            printf("\n Please, enter three integer values:\n ");
            scanf("%d %d %d", &a, &b, &c);
            fflush(stdin);

            if (ascendF(a, b, c) == 1) {
                printf("\n The given integers are in ascending order.\n\n");
            } else if (decrescF(a, b, c) == 1) {
                printf("\n The given integers are in descending order.\n\n");
            } else {
                printf("\n The given integers are neither in ascending nor descending order.\n\n");
            }
            break;
        case '2':
            break;        
        default:
            printf("\n Invalid option.\n");
            break;
        };
    } while (option !='2');
    return 0;
};


int ascendF(int a, int b, int c) {
    if (a < b && b < c) {
        return 1;
    } else {
        return 0;
    };
};

int decrescF(int a, int b, int c) {
    if (a > b && b > c) {
        return 1;
    } else {
        return 0;
    };
};