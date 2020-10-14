/* Build a program to calculate and output the total price for the given kilos
and price by kilo */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    float priceByKg, quantInKg, total; 

    puts("Welcome to HOW MUCH IS IT?");
    puts("Please, enter the price by kg of your product without currency symbol.");
    scanf ("%f", &priceByKg);
    puts("Now enter the desired weight in kilos without unit symbol.");
    scanf ("%f", &quantInKg);

    total = priceByKg * quantInKg;
    printf("\n%.2fkg at %.2f by kg comes to a total of %.2f.\nThank you, come again.\n\n", quantInKg, priceByKg, total);

    system ("pause");
    return 0;
};