/* FIX THE FOLLOWING CODE:
 main(){
 integer x;
 real y;
 scanf(“%D”, y);
 printf("%f",x);
}
*/

#include <stdio.h> //Added Libraries


int main(){ // Missing type declaration
    int x; // Integer is not a valid type declaration
    float y; // Real is not a valid type declaration
    printf("Welcome. Please, enter a floating-point number to begin\n");
    // Instructions were missing
    scanf("%f", &y); // Wrong use of symbols, casing and data type. There was no direction to y
    x = (int)y; // Added some functionality which was lacking or made no sense
    printf("\nThe integer for the number you entered is %d\n\n", x);
    //Added output
    
    system ("pause"); // Added pause for usability 
    return 0; // Added return
};