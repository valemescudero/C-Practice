/* Develop an algorithm that reads two entered values and prints their sum,
difference, product, quotient, mean and the double of the difference between
the first and half of the second */

#include <stdio.h>
#include <math.h> 
  
int main () { 
    int firstNum, secondNum, sum;

    puts("Please, enter an integer");
    scanf ("%i", &firstNum);
    puts("Please, enter one more integer to begin the calculations\n");
    scanf ("%i", &secondNum);
    sum = firstNum+secondNum; 

    printf("The sum of %i and %i is equal to %i \n", firstNum, secondNum, sum);
    printf("The difference between %i and %i is equal to %i \n", firstNum, secondNum, firstNum-secondNum);
    printf("The product of %i and %i is equal to %i \n", firstNum, secondNum, firstNum*secondNum);
    printf("The quotient of %i divided %i is equal to %.2f \n", firstNum, secondNum, (float)firstNum/secondNum);
    printf("The mean of %i and %i is equal to %.2f \n", firstNum, secondNum, sum/2);
    printf("The double of the difference between %i and the half of %i is equal to %.2f \n\n", firstNum, secondNum, (float)2*(firstNum-(secondNum/2)));

    system ("pause");
    return 0;
};