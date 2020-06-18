/* Develop an algorithm that calculates the area of a circle segment taking the circle's radius and the apothem of the triangular portion */

#include <stdio.h>
#include <math.h>

void areaF(double radius, double apothem);

int main () {
    double radius = 0, apothem = 0;
    int option = 0;
    
    printf("\n Please, enter the radius of the circle corresponding to the segment you want the area for,\n followed by the apothem of the triangular portion and separated with spaces:\n ");
    scanf("%lf %lf", &radius, &apothem);
    
    do {
        printf("\n What would you like to do?:\n 1 Calculate the Area\n 2 Change radius and height\n 3 Exit\n\n ");
        scanf("%d", &option);
        switch (option) {
        case 1:
            areaF(radius, apothem);
            break;
        case 2:
            printf("\n Please, enter the radius of the circle corresponding to the segment you want the area for,\n followed by the apothem of the triangular portion and separated with spaces:\n ");
            scanf("%lf %lf", &radius, &apothem);
            break;
        case 3:
            break;
        default:
            printf("\n Sorry, invalid option.\n\n");
            break;
        }


    } while (option !=3);
    
    
    return 0;
};

void areaF(double radius, double apothem) {
    double  height = 0,  alpha = 0, x = 0, area = 0;
    
    height = radius - apothem;
    x = 1 - (height/radius);
    alpha = 2 * (acos(x));

    area = ((radius*radius)/2)*(alpha - sin(alpha));

    printf("\n The area of the segment is %.2f. \n\n", area);
};