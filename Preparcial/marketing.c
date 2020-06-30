void facturaF (int *, char *, int *, int *, int *);
void fun ();

#include <stdio.h>

int main () {
    int client = 0;
    char option = '2';
    char cat = '0';
    int import = 0, byClientC = 0, byClientP = 0;

    printf("WELCOME");

    do {
        printf("Choose an option: 1 Run 0 Exit");
        scanf("%c", &option);

        switch (option)
        {
        case '1':
                facturaF (&client, &cat, &import, &byClientC, &byClientP);
                printf(" Total cliente %d\n Abono C: %d\n Abono P: %d", client, byClientC, byClientP);
            break;
        case '0':
            break;

        default:
            printf("Invalid option");
            break;
        }

    } while (option != '0');




    return 0;
};


void facturaF (int * client, char * cat, int * import, int * byClientC, int * byClientP) {
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
                switch (*cat){
                case 'c':
                    *byClientC++;
                    break;
                case 'p':
                    *byClientC++;
                    break;
                default:
                    break;
                };

                do {
                    printf("Enter import of the bill:");
                    scanf("%d", &import);
                    
                    if (import < 0) {
                        printf("Invalid import");
                    };

                } while (import < 0);

};

