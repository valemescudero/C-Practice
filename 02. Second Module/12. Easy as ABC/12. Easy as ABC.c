/* Given three char, the program should print them rearranged per their corresponding ASCII Code */

#include <stdio.h>

void sortF(char , char , char );

int main() {
    char a = '0', b = '0', c = '0';
    char option = '0';

    printf("\n Welcome. Easy as ABC operates with ASCII Code to rearrage any three characters of your choice.\n\n");
    
    do {
        printf(" 1 Rearrange new set of characters\n 2 Exit\n\n ");
        scanf("%c", &option);
        fflush(stdin); 
        switch (option) {
            case '1':
                printf("\n Please, enter three characters separated by spaces:\n ");
                scanf("%c %c %c", &a, &b, &c);
                fflush(stdin);
                sortF(a, b, c);
                break;
            case '2':
                break;    
            default:
                printf("\n Sorry, invalid option.\n\n");
                break;
        }
    } while (option != '2');

    return 0;
}

void sortF(char a, char b, char c) {
    if (a == b) {
        if (a == c) {
            printf("\n All entered characters are the same (%c).\n\n", a);
        } else if (a < c) {
            printf("\n %c %c (first two characters were the same).\n\n", a, c);
        } else {
            printf("\n %c %c (first two characters were the same).\n\n", c, a);
        };
    } else if (a == c) {
        if (a < b){
            printf("\n %c %c (first and third characters were the same).\n\n", a, b);
        } else {
            printf("\n %c %c (first and third characters were the same).\n\n", b, a);
        };
    } else if (b == c) {
        if (a <  b) {
            printf("\n %c %c (second and third characters were the same).\n\n", a, b);
        } else {
            printf("\n %c %c (second and third characters were the same).\n\n", b, a);
        };
    } else if ( a < b) {
        if (b < c){
            printf("\n %c %c %c\n\n", a, b, c);
        } else {
            if (a < c) {
            printf("\n %c %c %c\n\n", a, c, b);
            } else {
            printf("\n %c %c %c\n\n", c, a, b);
            };
        };
    } else if (b < c) {
        if(a < c) {
            printf("\n %c %c %c\n\n", b, a, c);
        } else {
            printf("\n %c %c %c\n\n", b, c, a);
        };
    } else {
        printf("\n %c %c %c\n\n", c, b, a);
    };
};