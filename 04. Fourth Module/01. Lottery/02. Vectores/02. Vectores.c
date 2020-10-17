/* Escribe un programa con un menú que defina las siguientes funciones y emita los resultados, la
dimensión del vector será de 10 (elementos):
a) Cargar m elementos de un vector por teclado. Deberá considerar que no podrá superar el
máximo de elementos de vector: void cargar(int vect[], int unNum);
b) Leer elementos de un vector hasta encontrar el número entero a. Deberá retornar el
número de elementos que ha leído sin contar el entero a. int leerMarca(int
vect[]);
c) Dado un elemento y dado un vector de enteros, desarrolle una función que devuelva el
número de apariciones del elemento en el vector. int veces(int valor, int
vect[], int unNum);
d) Invertir los elementos del vector sin utilizar otro vector. Por ejemplo, el vector formado por
los enteros: 1 2 3, debe quedar 3 2 1. void invertirOrden(int vect[], int
unNum);
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DIM 10

void store(int * numbers[]);
int find(int numbers[], int * searchFor);
int countOccurrences(int numbers[], int* match);
void reverse(int *numbers[], int right);


int main() {
    int numbers[DIM] = {0};
    int occurrence = 0;
    int searchFor = 0;
    int matches = 0;
    int match = 0;

    char option = '0';

    printf(" Welcome.\n");
    do {
        printf("\n Please, select an option:");
        printf("\n 1. Enter numbers into the 'numbers' array");
        printf("\n 2. Find the first ocurrence of a number inside the 'numbers' array");
        printf("\n 3. Find the number of occurrences of a number inside the 'numbers' array");
        printf("\n 4. Reverse all numbers inside of 'numbers' array");
        printf("\n 5. Exit");

        scanf("%d", &option);
        fflush(stdin);

        switch (option) {
        case '1':
            store(&numbers); //-------------------STORE NUMBERS---------------

            printf("\n The stored array 'numbers' looks like this:\n");
                
            for (int i = 0; i < DIM; i++){
                printf("%d\n", numbers[i]);
            };

            printf("\n");
            break;

        case '2':
            occurrence = find(numbers, &searchFor);//------------------FIND NUMBER----------------
            
            if(occurrence != -1){
                printf("\n The first ocurrence of %d appears after %d numbers at numbers[%d]\n", searchFor, occurrence, occurrence);
            } else {
                printf("\n There are no coincidences for %d inside of 'numbers' array.\n", searchFor);
            };
            break;

        case '3':
            matches = countOccurrences(&numbers, &match);//------------------OCCURRENCE OF NUMBER----------------
            
            if(matches > 0){
                printf("\n The number %d appears %d times inside of 'numbers' array\n", match, matches);
            } else {
                printf("\n There are no coincidences for %d inside of 'numbers' array.\n", match);
            };   
            break;

        case '4':
            reverse(&numbers, DIM-1);//---------------REVERSE NUMBERS-------------------
    
            printf("\n The rearranged array 'numbers' looks like this now:\n");
    
            for (int i =0; i < DIM; i++){
                printf("%d\n", numbers[i]);
            };
            printf("\n");
            break;

        case '5': //Exit
            break;

        default:
            printf("\n Invalid option.\n");
            break;
        };

    } while (option != '5');

    system("pause");
    return 0;
};

void store(int * numbers[]) {

    for (int i =0; i < DIM; i++){
        scanf("%d", &numbers[i]);
        fflush(stdin);
    };
};

int find(int numbers[], int * searchFor){
    
    printf("\n Please, enter a number to search for its first ocurrence of.\n");
    scanf("%d", &searchFor);
    fflush(stdin);

    for (int i =0; i < DIM; i++){
        if (numbers[i]==searchFor){
            return i;
        } else {
            return -1;
        };
    };
};

int countOccurrences(int numbers[], int* match){
    int matches = 0;

    printf("\n Please, enter a number to search for all the instances of its ocurrence within numbers array.\n");
    scanf("%d", &match);
    fflush(stdin);

    for (int i =0; i < DIM; i++){
        if (numbers[i]==match){
            matches++;
        };
    };
    return matches;
};

void reverse(int *numbers[], int right) {
    int left = 0;
    while (left < right){
        int temp = numbers[left];
        numbers[left] = numbers[right];
        left++;
        numbers[right] = temp;
        right--;
    };
};
