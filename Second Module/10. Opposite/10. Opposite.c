/* Write a program that asks for two integers and shows the message
"These numbers have opposite signs" only if one of the entered integers is negative:
a) working with only one logical operator
b) without any logical operator */

void negativeF(int *, int *);

#include <stdio.h>
#include <math.h>

int main() {
    int a = 0, b = 0;
    char option = '0';

    printf("\n Welcome. This program will ask you for two numbers and tell you whether only one of them is negative.\n\n");
    
    do {
        printf(" What would you like to do?\n 1 Test a set of numbers\n 2 Exit.\n\n ");
        scanf("%c", &option);
        fflush(stdin); 
        switch (option) {
            case '1':
                printf("\n Please, enter two integer values separated by a space:\n ");
                scanf("%d %d", &a, &b);
                fflush(stdin);
                negativeF(&a,&b);
                break;
            case '2':
                break;    
            default:
                printf("\n Sorry, invalid option.\n ");
                break;
        }
    } while (option != '2');

    return 0;
}

void negativeF(int * a, int * b) {
//      if (a < 0 ^ b < 0) { One logical operator alternative

        if (*a * *b < 0) {
            printf("\n These numbers have opposite signs.\n\n");
        } else {
            printf("\n These numbers have the same sign.\n\n");
        }
}