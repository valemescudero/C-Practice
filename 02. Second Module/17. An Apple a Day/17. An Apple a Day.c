// A greengrocer's shop if having a discount on their apples according to the following table:
// Kgs bought - discount
// 0 - 2 0%
// 2.01 - 5 10%
// 5.01 - 10 15%
// 10.01+ 20%

float discountF(float, float);

#include <stdio.h>

int main () {
    char option = '0';
    float priceByKg = 89.90, kgs =0, total = 0;

    printf(" Welcome.");

    do {
        printf("\n 1 Check for discounts\n 2 Exit\n ");
        scanf("%c", &option);
        fflush(stdin);
            switch (option) {
                case '1':
                    do {
                        printf("\n\n Please, enter weight (kgs):\n ");
                        scanf("%f", &kgs);
                        fflush(stdin);

                        if(kgs <=0) {
                            printf("\n\n Please enter a weight higher than zero.");
                        }
                    } while (kgs <= 0);
                    total = discountF(kgs, priceByKg);
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


float discountF(float kgs, float priceByKg) {
    float aux = priceByKg/100;
    if (kgs < 2.01) {
        printf("\n No discounts found.\n");
        return kgs;
    } else if (kgs < 5.01){
        printf("\n Your purchase has a 10%% discount.\n");
        return aux*10;
    } else if(kgs < 10.01) {
        printf("\n Your purchase has a 15%% discount.\n");
        return aux*15;        
    } else {
        printf("\n Your purchase has a 20%% discount.\n");
        return aux*20;
    }
};