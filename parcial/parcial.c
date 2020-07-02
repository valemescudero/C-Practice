void funcionUno(int *, int*, int*, int*, int*);
void funcionDos (char*, int *, int *, int *);
void funcionTres(char*, int, int, int *, int *, int *, int *, int *);


#include <stdio.h>

int main () {
    int escuela = -1;    
    int legajosProcesados = 0;
    int docentesIT = 0, docentesMT = 0, docentesET = 0;

    printf(" Bienvenido.\n");

    do {
        printf(" Por favor, ingrese numero de escuela para continuar\n o ingrese 0 para salir:\n ");
        scanf("%d", &escuela);
        fflush(stdin);
        if (escuela < 0) {
            printf("\n El numero de escuela ingresado no es válido.\n");
        } else if (escuela > 0) {
            funcionUno(&escuela, &legajosProcesados, &docentesIT, &docentesMT, &docentesET);
        };
    } while (escuela != 0);
    printf("\n Legajos procesados: %d", legajosProcesados);
    printf("\n Cantidad total de docentes por especialidad:\n Informatica: %d Mecanica: %d Electronica: %d\n", escuela, docentesIT, docentesMT, docentesET);

    system("pause");
    return 0;
}

void funcionUno (int * escuela, int *legajosProcesados, int * docentesIT, int * docentesMT, int * docentesET) {
    int legajo = 0, asistencia = 0, mayorAsist = 0, mayorAsistLegajo = 0;
    char especialidad ='0';
    int asistenciaI = 0, asistenciaM = 0, asistenciaE = 0;
    int docentesI = 0, docentesM = 0, docentesE = 0;

    do {
        printf("\n Por favor, ingrese número de legajo de docente o 0 para volver:");
        scanf("%d", &legajo);
        fflush(stdin);
        if(legajo < 0) {
            printf("\n\n El número de legajo ingresado no es válido.");
        } else if (legajo > 0) {
            *legajosProcesados++;
            do {
                printf("\n Ingrese especialidad\n\n I Ingeniería\n M Mecánica\n E Electrónica (case sensitive):\n ");
                scanf("%c", &especialidad);
                fflush(stdin);
                if (especialidad != 'I' && especialidad != 'M' && especialidad != 'E'){
                    printf("\n\n La especialidad ingresada no es válida.");
                }
            } while (especialidad != 'I' && especialidad != 'M' && especialidad != 'E');

            do {
                printf("\n Ingrese asistencia:\n ");
                scanf("%d", &asistencia);
                fflush(stdin);
                if (asistencia <0){
                    printf("\n\n La asistencia debe ser mayor o igual a cero.");
                }
            } while (asistencia <0);

            funcionTres(&especialidad, asistencia, legajo, &mayorAsist, &mayorAsistLegajo, &asistenciaI, &asistenciaM, &asistenciaE);
            funcionDos(&especialidad, &docentesI, &docentesM, &docentesE);
        }
    } while (legajo != 0);
    *docentesIT += docentesI;
    *docentesMT += docentesM;
    *docentesET += docentesE;
    printf("\n\nProfesores de la escuela #%d:\n\n Informática: %d Mecánica: %d Electrónica: %d\n Mejor asistencia: legajo %d", *escuela, docentesI, docentesM, docentesE, mayorAsistLegajo);
};

void funcionDos (char * especialidad, int * docentesI, int * docentesM, int * docentesE) {
    switch (* especialidad) {
    case 'I':
        *docentesI++;
        break;
    case 'M':
        *docentesM++;
        break;
    case 'E':
        *docentesE++;
        break;
    }
}
void funcionTres(char * especialidad, int asistencia, int legajo, int * mayorAsist, int * mayorAsistLegajo, int * asistenciaI, int * asistenciaM, int * asistenciaE) {
    if (asistencia > *mayorAsist) {
        *mayorAsist = asistencia;
        *mayorAsistLegajo = legajo;
    };
        switch (*especialidad)
    {
    case 'I':
        *asistenciaI+= asistencia;
        printf("hola");
        break;
    case 'M':
        *asistenciaM+= asistencia;
        break;
    case 'E':
        *asistenciaE+= asistencia;
        break;
    }

}