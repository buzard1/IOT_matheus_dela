#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[18];
    int mat[3][6];
    int i, j, k=0;

	printf("Desenvolvido por Matheus Dela\n");
    printf("Digite 18 numeros:\n");
    for(i=0; i<18; i++){
        printf("Elemento %d: ", i+1);
        scanf("%d", &vet[i]);
    }

    for(i=0; i<3; i++){
        for(j=0; j<6; j++){
            mat[i][j] = vet[k];
            k++;
        }
    }

    printf("\nMatriz 3x6:\n");
    for(i=0; i<3; i++){
        for(j=0; j<6; j++){
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}