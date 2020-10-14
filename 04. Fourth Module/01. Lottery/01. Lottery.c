/* Write a program that stores in a vector of DIM 10 the first 10 numbers of the lottery.
Users must be asked for position and number such as the fifth number can be
entered before the second.*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DIM 10 // Amount of numbers to be stored
#define DIM2 2 // Digits of the Amount of numbers to be stored
#define DIM3 99 // Lottery's max number
#define DIM4 2 // Digits of Lottery's max number

void f1_newNumber(int *[DIM]);
void f2_printLotteryNums(int[DIM]);

int main() {
    int lottery[DIM] = {0};
    char option = '0';

    printf("\n\n WELCOME.\n");

    do {
        char option = '0';
        printf("\n Please select an option:\n  1. Enter a new lottery number\n  2. Exit\n\n  ");
        scanf("%c", &option);
        fflush(stdin);

        switch (option) {
        case '1':
            f1_newNumber(&lottery);
            f2_printLotteryNums(lottery);
            break;
        case '2':
            break;
        default:
            printf("\n Invalid option.\n");
            break;
        }
    } while (option != '2');

    system("pause");
    return 0;
};


void f1_newNumber(int * lottery[DIM]){
char positionAux[DIM2];
char newNumAux[DIM4];
int position = 0, newNum = 0;
int error = 0;

do {
        printf("\n Please enter number position (01 to %d):\n\n  ", DIM);
        scanf("%s", &positionAux);
        fflush(stdin);

    position = atoi(positionAux);
    if (position>DIM || position<1) {
        printf("\n\n Sorry, the entered position is invalid.");
        error = 1;
    } else {
        position--;
        printf("%d", position);
        error = 0;
    };
} while (error == 1);

do {
    printf("\n Enter lottery number (00 to %d):\n  ", DIM3);
    scanf("%s", &newNumAux);
    fflush(stdin);

    newNum = atoi(newNumAux);
    printf("%s",newNumAux);

    if (newNum>DIM3 || newNum<0 || (newNum == 0 && strcmp(newNumAux,"0") && strcmp(newNumAux,"00"))) {
        printf("\n Sorry, the entered number is invalid.");
        error = 1;
    } else {
        lottery[position] = newNum;
        error = 0;
    };
} while (error == 1);
};

void f2_printLotteryNums(int lottery[DIM]) {
    int i;

    printf("\n The entered lottery numbers are:\n  ");
    for(i = 0; i < DIM; i++) {
      printf("%d ", lottery[i]);
    };
    printf("\n\n");
};