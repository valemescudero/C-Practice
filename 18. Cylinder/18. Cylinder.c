#include <stdio.h>
#include <math.h>

void areaF (float radius, float height);
void volF (float radius, float height);

int main () {
    float radius = 0, height = 0;
    int option = 0;

    printf("\n Please, enter radius and height of your cylinder separated by a space:\n ");
    scanf("%f %f", &radius, &height);

    do {
        printf("\n What would you like to do?:\n 1 Calculate the Area\n 2 Calculate the Volume\n 3 Exit\n\n ");
        scanf("%d", &option);
        switch (option) {
            case 1:
            areaF(radius, height);
            break;
            case 2:
            volF(radius, height);
            case 3:
            break;
            default:
            printf("\n Sorry, invalid option.\n\n");
            break;
        };
    } while (option != 3);
    return 0;
};

void areaF (float radius, float height) {
    double PI = 3.14159265359;
    float AREA = 0;
    AREA = 2 * PI * radius * (height + radius);
    printf("\n The area of the cylinder is %.2f (square).\n\n ", AREA);

};

void volF (float radius, float height) {    
    double PI = 3.14159265359;
    float VOL = 0;
    VOL = PI * radius * radius * height;
    printf ("\n The volume of the cylinder is %.2f (cubic).\n\n ", VOL);

};