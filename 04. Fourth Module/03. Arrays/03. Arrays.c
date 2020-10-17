/* Continúa agregando funciones al ejercicio anterior que permitan:
a) Calcular y emitir la suma de sus elementos.
b) Calcular y emitir el mínimo del vector.
c) Calcular y emitir el promedio de los valores del vector
d) Emitir los valores de aquellos que superaron ese promedio.
e) Emitir los valores del vector que son múltiplos del último número ingresado en el mismo.
f) Emitir el valor máximo e indicar la cantidad de veces que apareció y el número de orden en
que fue ingresado.
g) Emitir los valores que son pares.
h) Emitir los valores que son impares.
i) Emitir aquellos que estén ubicados en posición par.
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DIM 10

void store(int numbers[]);
int find(int numbers[], int* searchFor);
int countOccurrences(int numbers[], int* match);
void reverse(int numbers[], int right);
int sum(int numbers[]);
int lowest(int numbers[]);
float mean(int numbers[]);
void higherEnd(int numbers[]);
void findMutiples(int numbers[]);
void highest(int numbers[]);
void even(int numbers[]);
void odd(int numbers[]);
void evenPosition(int numbers[]);


int main() {
    int numbers[DIM] = {0};
    int occurrence = 0;
    int searchFor = 0;
    int matches = 0;
    int match = 0;

    int option = 0;

    printf(" Welcome.\n");
    do {
        system("cls");
        printf("\n Please, select an option:");
        printf("\n 1. Enter numbers into the 'numbers' array");
        printf("\n 2. Find the first ocurrence of a number inside the array");
        printf("\n 3. Find the number of occurrences of a number inside the array");
        printf("\n 4. Reverse all numbers in the array");
        // ---------------NEW FUNCTIONS-------------------------------
        printf("\n 5. Find the sum of all the elements in the array");
        printf("\n 6. Find the lowest number in the array");
        printf("\n 7. Find the mean for the elements in the array");
        printf("\n 8. Find the numbers higher than the mean");
        printf("\n 9. Look for multiples of the last number inside the array");
        printf("\n 10. Find the highest number in the array");
        printf("\n 11. Print all even numbers inside the array");
        printf("\n 12. Print all odd numbers inside the array");
        printf("\n 13. Print all numbers in an even position inside the array");
        printf("\n 14. Exit\n ");

        scanf("%d", &option);
        fflush(stdin);

        switch (option) {
        case 1:
            store(&numbers); //-------------------STORE NUMBERS---------------
            system("cls");
            printf("\n The stored array 'numbers' looks like this:\n");
            printf(" [");
            for (int i = 0; i < DIM; i++){
                printf("%d", numbers[i]);
                if(i<DIM-1){
                    printf(", ");
                }
            };

            printf("]\n\n\n\n");
            system("pause");
            system("cls");
            break;

        case 2:
            system("cls");
            occurrence = find(numbers, &searchFor);//------------------FIND NUMBER----------------
            
            if(occurrence > -1){
                printf("\n The first ocurrence of %d appears after %d numbers at numbers[%d]\n\n", searchFor, occurrence, occurrence);
            } else {
                printf("\n There are no coincidences for %d inside of 'numbers' array.\n\n", searchFor);
            };
            system("pause");
            system("cls");
            break;

        case 3:
            system("cls");
            matches = countOccurrences(numbers, &match);//------------------OCCURRENCE OF NUMBER----------------
            
            if(matches > 0){
                printf("\n The number %d appears %d times inside of 'numbers' array.\n\n", match, matches);
            } else {
                printf("\n There are no coincidences for %d inside of 'numbers' array.\n\n", match);
            };   
            system("pause");
            system("cls");
            break;

        case 4:
            system("cls");
            reverse(&numbers, DIM-1);//---------------REVERSE NUMBERS-------------------
    
            printf("\n The rearranged array 'numbers' looks like this now:\n");
    
            for (int i =0; i < DIM; i++){
                printf("%d\n", numbers[i]);
            };
            printf("\n\n\n\n");
            system("pause");
            system("cls");
            break;

        case 5:
            printf("The sum of all the elements in the array is %d", sum(numbers));
            printf("\n\n\n\n");
            system("pause");
            system("cls");
            break;
            
        case 6:
            printf("The lowest number in the array is %d", lowest(numbers));
            printf("\n\n\n\n");
            system("pause");
            system("cls");
            break;
            
        case 7:
            printf("The mean for the elements in the array is %.2f", mean(numbers));
            printf("\n\n\n\n");
            system("pause");
            system("cls");
            break;
            
        case 8:
            higherEnd(numbers);
            break;
            
        case 9:
            findMutiples(numbers);
            break;
            
        case 10:
            highest(numbers);
            break;
            
        case 11:
            even(numbers);
            break;
            
        case 12:
            odd(numbers);
            break;
            
        case 13:
            evenPosition(numbers);
            break;

        case 14: //Exit
            break;

        default:
            system("cls");
            printf("\n Invalid option.\n\n\n\n");            
            system("pause");
            system("cls");
            break;
        };

    } while (option != 14);

    system("pause");
    return 0;
};

void store(int numbers[]) {
    system("cls");
    printf("\n Please, enter the numbers:\n ");
    for (int i =0; i < DIM; i++){
        scanf("%d", &numbers[i]);
        fflush(stdin);
    };
};

int find(int numbers[], int *searchFor){
 
    printf("\n Please, enter a number to search for its first ocurrence of.\n ");
    scanf("%d", searchFor);
    fflush(stdin);

    for (int i =0; i < DIM; i++){
        if (numbers[i] == (*searchFor)){
            return i;
        };
    };
    return -1;
};

int countOccurrences(int numbers[], int* match){
    int matches = 0;

    printf("\n Please, enter a number to search for all the instances of its ocurrence within numbers array.\n ");
    scanf("%d", match);
    fflush(stdin);

    for (int i =0; i < DIM; i++){
        if (numbers[i] == (*match)){
            matches++;
        };
    };
    return matches;
};

void reverse(int numbers[], int right) {
    int left = 0;
    while (left < right){
        int temp = numbers[left];
        numbers[left] = numbers[right];
        left++;
        numbers[right] = temp;
        right--;
    };
};
int sum(int numbers[]) {
    int sum = 0;
        for (int i =0; i < DIM; i++){
        sum += numbers[i];
    };

    return sum;
};

int lowest(int numbers[]){
    int lowest = numbers[0];
        for (int i =0; i < DIM; i++){
            if(lowest > numbers[i]){
                lowest = numbers[i];
        };
    };

    return lowest;
};

float mean(int numbers[]){
    int sumAux = sum(numbers);
    float mean = (float)sumAux/(float)DIM;
    return mean;
};

void higherEnd(int numbers[]) {
    float meanAux = mean(numbers);
    int none = 1;

    printf("\n The numbers higher than the mean of the array are:\n");

    for (int i =0; i < DIM; i++){
        if(((float)numbers[i]) > meanAux){
            none--;
            printf("%d ", numbers[i]);
        };
    };
    if (none == 1){
        printf("None. Therefore, all numbers inside the array must be the same.");
    };

    printf("\n\n\n\n");
    system("pause");
    system("cls");

};

void findMutiples(int numbers[]){
    int none = 1;

    printf("\n The numbers multiple of %d inside the array are:\n", numbers[DIM-1]);
    if(numbers[DIM-1] != 0) {
        for (int i =0; i < DIM; i++){
            if(numbers[i]%numbers[DIM-1] == 0){
                none--;
                printf("%d ", numbers[i]);
            };
        };
    };

    if (none == 1){
        printf("None.");
    };
    printf("\n\n\n\n");
    system("pause");
    system("cls");
};

void highest(int numbers[]){
    int occurrence = 0;
    int highest = numbers[0];
    int highestIndex = 0;

    for (int i =0; i < DIM; i++){
        if(highest < numbers[i]){
            highest = numbers[i];
            highestIndex = i;
            occurrence = 1;
        } else if(highest == numbers[i]){
            occurrence++;
        };
    };
    printf("The highest number in the array is %d with position %d.\n", highest, highestIndex);
    printf("It appears %d times.\n", occurrence);
    printf("\n\n\n\n");
    system("pause");
    system("cls");
};

void even(int numbers[]){
    int none = 1;

    printf("\n The even numbers inside the array are:\n");
    for (int i =0; i < DIM; i++){
        if(numbers[i]%2 == 0){
            none--;
            printf("%d ", numbers[i]);
        };

        if (none == 1){
            printf("None.");
        };
    }; 
    printf("\n\n\n\n");
    system("pause");
    system("cls");  
};

void odd(int numbers[]){
    int none = 1;

    printf("\n The odd numbers inside the array are:\n");
    for (int i =0; i < DIM; i++){
        if(numbers[i]%2 != 0){
            none--;
            printf("%d ", numbers[i]);
        };
    };
    
    if (none == 1){
        printf("None.");
    };

    printf("\n\n\n\n");
    system("pause");
    system("cls");
};

void evenPosition(int numbers[]){

    printf("\n The numbers on an even position inside the array are:\n");
    for (int i =0; i < DIM; i+=2){
        printf("%d ", numbers[i]);
    };

    printf("\n\n\n\n");
    system("pause");
    system("cls");
};