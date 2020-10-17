#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define APP_NAME_LEN 15
#define MAX_LINE 100

int getConfInfo(char*, char*, char*, char*);
void printHeader(char appName[]);
char printMainMenu(char appName[]);
int printGrid(char appName[]);


int main () {
    char option = '0';
    char appName[15] = {'0'};
    char circuit[15] = {'0'};
    char circuit2[15] = {'0'};
    char appVersion[5] = {'0'};

    getConfInfo(&appName, &circuit, &circuit2, &appVersion);

    do {
        switch (option) {
        case '0': // Menú principal
            option = printMainMenu(appName);
            break;
        case '1':
            option = printGrid(appName);
            break;
        case '7': // Salir
            break;
        default: // Opción no válida
          break;
        }
    } while (option != '7');


    system("pause");
    return 0;
};

int getConfInfo(char* appName, char* circuit, char* circuit2, char* appVersion) {

    FILE *fptr = fopen("config.txt","rt");
    if (fptr == NULL) {
        printf("Error: file not found.");
        return 1;
    }; 
    
    char line[MAX_LINE];
    int lineCont = 0;
    while(fgets(line, MAX_LINE, fptr) != NULL) {
        switch (lineCont) {
            case 0:
                strcpy(appName, line);
                printf("%s", appName);
                break;
            case 1:
                strcpy(circuit, line);
                printf("%s", circuit);
                break;
            case 2: 
                strcpy(circuit2, line);
                printf("%s", circuit2);
                break;
            case 3:
                strcpy(appVersion, line);
                printf("%s", appVersion);
                break;
            default:
                break;
        };
        lineCont++;
    };
    return 0;

};

void printHeader(char appName[]) {
    system("cls");
    printf("________________________oOo________________________\n\n");
    printf("                  %s\n", appName);
    
};

char printMainMenu(char appName[]){
    char option ='0';
    do {
        printHeader(appName);

        printf(" 1. Mostrar grilla\n");
        printf(" 2. Mejor tiempo de vuelta en vuelta\n");
        printf(" 3. Mejor tiempo de vuelta en carrera\n");
        printf(" 4. Pelea por posición en vuelta\n");
        printf(" 5. Finale de carrera\n");
        printf(" 6. Imprimir podio\n");
        printf(" 7. Salir\n\n ");

        scanf("%c", &option);
        fflush(stdin);

    } while (option <'1' || option > '7');

    return option;
};

int printGrid(char appName[]) {

    printHeader(appName);
    system("pause");
    return '0';
};