/* Escribe un programa que reciba dos números enteros como entrada y escriba el mensaje
"signos opuestos", sólo si uno de los números ingresados es negativo:
a) usando un sólo operador lógico
b) sin utilizar operadores lógicos en la condición.
*/

void negativeF(int *, int *);

#include <stdio.h>
#include <math.h>

int main() {
    int a = 0, b = 0;
    int option = 0;

    printf("\n Welcome. This program will ask you for two numbers and tell you whether only one of them is negative.\n\n");
    
    do {
        printf(" What would you like to do?\n 1 Test a set of numbers\n 2 Exit.\n\n ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("\n Please, enter two integer values separated by a space:\n ");
                scanf("%d %d", &a, &b);
                negativeF(&a,&b);
                break;
            case 2:
                break;    
            default:
                printf("\n Sorry, invalid option. What would you like to do?\n 1 Test a set of numbers\n 2 Exit\n. ");
                break;
        }
    } while (option != 2);

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


