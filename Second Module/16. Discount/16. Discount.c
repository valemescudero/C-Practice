// En un almacén se rebaja 20% del precio al cliente si el valor a pagarse es mayor a $200. Dado
// un valor, muestre lo que debe pagar el cliente.

float discountF(float);

#include <stdio.h>

int main () {
    char option = '0';
    float subtotal = 0, total = 0;

    printf(" Welcome.");

    do {
        printf("\n 1 Check for discounts\n 2 Exit\n ");
        scanf("%c", &option);
        fflush(stdin);
            switch (option) {
                case '1':
                    do {
                        printf("\n\n Enter subtotal.\n ");
                        scanf("%f", &subtotal);
                        fflush(stdin);

                        if(subtotal <=0) {
                            printf("\n\n Please enter a subtotal higher than zero.");
                        }
                    } while (subtotal <= 0);
                    total = discountF(subtotal);
                    printf("\n Your new total is: $%.2f.\n", total);
                    break;
                case '2':
                    break;
                default:
                    printf("\n\n Invalid option. Please, try again.\n");
                    break;
            }
    } while (option != '2');


    return 0;
};


float discountF(float subtotal) {
    if (subtotal > 200) {
        printf("\n Discount found! 20%% discount on all purchases over $200.\n");
        return (subtotal/100) * 80;
    } else {
        printf("\n No discounts found.\n");
        return subtotal;
    }
};