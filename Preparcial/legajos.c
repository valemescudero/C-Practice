#include <stdio.h>

int main() {
    
    int legajo = 0, legajosCont = 0, edad = 0;
    char genero = '0';

    int mayorEdadM = 0, legajoMayorEdadM = 0;
    int legajosM = 0, legajosF = 0;
    int acumEdad = 0;
    printf("\n Bienvenido.\n");
    do {
    printf("\n Ingrese legajo:\n ");
    scanf("%d", &legajo);
    fflush(stdin);
    
    if (legajo > 1200 && legajo < 4000) {
        legajosCont++;

        while (edad < 14) {
            printf("\n Ingrese edad:\n ");
            scanf("%d", &edad);
            fflush(stdin);

            if(edad < 14){
                printf("\n El sistema no acepta edades menores a 14 años.\n");
            } else {
                acumEdad += edad;
            };
    };

    do {
            printf("\n Ingrese género (F/M/O):\n ");
            scanf("%c", &genero);
            fflush(stdin);

            if(genero != 'F' && genero != 'M' && genero != 'O') {
                printf("\n Código de género inválido (case sensitive).\n");
            };
    } while (genero != 'F' && genero != 'M' && genero != 'O');

    if (genero == 'F') {
        legajosF++;
    };
    if (genero == 'M') {
        legajosM++;
        if (edad > mayorEdadM) {
            mayorEdadM = edad;
            legajoMayorEdadM = legajo;
        }
    };

    } else if (legajo != -1) {
        printf("\n Legajo inválido.\n\n");
    };
    } while (legajo != -1);

    printf("\n Cantidad de empleados ingresados: %d.", legajosCont);

    if (legajosF == 0) {
        printf("\n Porcentaje de empleadas (F): 0%%.");
    } else {
        printf("\n Porcentaje de empleadas (F): %d%%.", ((100/legajosCont) * legajosF));
    };
    if (legajosM == 0) {
        printf("\n Porcentaje de empleadas (M): 0%%.");
    } else {
        printf("\n Porcentaje de empleados (M): %d%%.", ((100/legajosCont) * legajosM));
    };
    if (legajosCont == 0) {
        printf("\n Promedio de edad de los empleados: 0 años.");
    } else {
        printf("\n Promedio de edad de los empleados: %d años.", acumEdad/legajosCont);
    };
    if (legajosM == 0) {
        printf("\n El número de legajo del empleado de sexo masculino de mayor edad: NO HAY EMPLEADOS MASC.");
    } else {
        printf("\n El número de legajo del empleado de sexo masculino de mayor edad: %d.", legajoMayorEdadM);
    }

    printf("\n\n Presione ENTER para salir");
    system("pause");
    
    return 0;
};