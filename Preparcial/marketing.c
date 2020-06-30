void facturaF (int *, char *, int *, int *, int *, int *);
void clientTotalF (int *, char *, int *, int *, int *, int *, int *, int *);

#include <stdio.h>

int main () {
    int client = 0, totalClients = 0;
    char option = '2';
    char cat = '0', totalC = 0, totalP = 0, totalB = 0;
    int import = 0;

    printf("WELCOME");

    do {
        printf("Choose an option: 1 Run 0 Exit");
        scanf("%c", &option);

        switch (option)
        {
        case '1':
                facturaF (&client, &cat, &import, &totalC, &totalP, &totalB);
                totalClients++;
            break;
        case '0':
            break;

        default:
            printf("Invalid option");
            break;
        }

    } while (option != '0');

    printf("Total clients entered: %d", totalClients);
    if (totalC > totalP) {
        printf(" The category with higher earnings was: C (%d)", totalC);
    } else {
        printf(" The category with higher earnings was: P (%d)", totalP);
    };
    printf("Total category B bills was %d", totalB);

    return 0;
};


void facturaF (int * client, char * cat, int * import, int * totalC, int *totalP, int * totalB) {
    int byClientC = 0, byClientP = 0;
    printf("Enter client id:");
    scanf("%d", &client);

    for (int i = 0; i < 12; i++) {
        do {
            printf("Enter category of the bill:");
            scanf("%c", &cat);
                    
            if (*cat != 'c' && *cat != 'p' && *cat != 'b') {
                printf("Invalid category");
            };
        } while (cat != 'c' && cat != 'p' && cat != 'b');
        clientTotalF(&client, &cat, &import, &byClientC, &byClientP, &totalC, &totalP, &totalB);

        do {
            printf("Enter import of the bill:");
            scanf("%d", &import);
                    
            if (import < 0) {
                printf("Invalid import");
            };
        } while (import < 0);

    };
    printf(" Total cliente %d\n Abono C: %d\n Abono P: %d", client, byClientC, byClientP);
};

void clientTotalF(int * client, char * cat, int *import, int * byClientC, int * byClientP, int * totalC, int *totalP, int * totalB) {
    
        switch (*cat){
        case 'c':
            *byClientC += *import;
            *totalC += *import;
            break;
        case 'p':
            *byClientP += *import;
            *totalP += *import;
            break;
        case 'b':
            *totalB++;
        default:
            break;
        };

    
};
