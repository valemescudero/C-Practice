/* FIX THE FOLLOWING CODE:
main(){
 int n,total;
 float promedio;
 n=0;
 promedio=total/n;
 printf("prom=%f\n",promedio);
}
*/

#include <stdio.h> //Added Library
int main(){ // Missing type declaration
    int n,total;
    float promedio;

    // No instructions, plus calculations didn't make sense so I added a minimum of functionality
    printf("Welcome. Please, enter the total (integer) you'd like the average for \n");
    scanf("%d", &total);
    printf("Please, enter the number of items considered for the total \n");
    scanf("%d", &n);

    promedio=(float)total/n;
    printf("The mean for your total is %.2f\n", promedio);
    //Added output
    
    system ("pause"); // Added pause for usability 
    return 0; // Added return
    };