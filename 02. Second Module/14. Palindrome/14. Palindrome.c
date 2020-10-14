/* Build a program that determines whether an up to 5 digits number is palindrome or not */

#include <stdio.h>

void splitF(int);
int compareF(int, int);



int main () {
    int aux = 0;
    char option = '0';

    printf("\n WELCOME. Find out if a number qualifies as palindrome!\n\n");

    do {
        printf(" 1 Try number\n 2 Exit\n ");
        scanf("%c", &option);
        fflush(stdin);
        
        switch (option) {
        case '1':

// Validating number
            do {
                printf("\n Please, enter a positive integer up to five digits :\n ");
                scanf("%d", &aux);
                fflush(stdin);
                if (aux < 0 || aux > 99999) {
                    printf("\n Invalid input.");
                }
            } while (aux < 0 || aux > 99999);

            if (aux < 10) {
                printf("\n Any one number is a palindrome.\n\n");
            } else {
                splitF(aux);
            };

            break;
        case '2':
            break;
        default:
            printf("\n\n Invalid option. Please select again:\n ");
            break;
        };
    } while (option != '2');

    return 0;
};


void splitF(int aux) {
int a = 0, b = 0, d = 0, e = 0; // conceptual c(enter digit), never needed for comparison

    if (aux < 100) {
        a = aux/10;
        e = aux%10;
        if (compareF(a,e) == 1) {
            printf("\n This number is a palindrome.\n\n");
        } else {
            printf("\n This number is not a palindrome.\n\n");
        }
    } else if (aux < 1000) {
        a = aux/100;
        e = (aux%100)%10;
        if (compareF(a,e) == 1) {
            printf("\n This number is a palindrome.\n\n");
        } else {
            printf("\n This number is not a palindrome.\n\n");
        }
    } else if (aux < 10000) {
        a = aux/1000;
        e = ((aux%1000)%100)%10;
        if (compareF(a,e) == 0) {
            printf("\n This number is a not palindrome.\n\n");
        } else {
            b = (aux%1000)/100;
            d = ((aux%1000)%100)/10;
            if (compareF(b,d) == 0) {
                printf("\n This number is a not palindrome.\n\n");
            } else {
            printf("\n This number is a palindrome.\n\n");
            };
        }
    } else {
        a = aux/10000;
        e = (((aux%10000)%1000)%100)%10;
        if (compareF(a,e) == 0) {
            printf("\n This number is a not palindrome.\n\n");
        } else {
            b = (aux%10000)/1000;
            d = (((aux%10000)%1000)%100)/10;
            if (compareF(b,d) == 0) {
                printf("\n This number is a not palindrome.\n\n");
            } else {
            printf("\n This number is a palindrome.\n\n");
            };
        }; 
    };
};
int compareF (int a, int b) {

    if (a == b) {
        return 1;
    } else {
        return 0;
    };
};