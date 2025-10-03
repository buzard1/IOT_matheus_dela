#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10];
    int i, achei = 0;

	printf("Desenvolvido por Matheus Dela\n");
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    printf("\nNumeros maiores que 50:\n");
    for (i = 0; i < 10; i++) {
        if (v[i] > 50) {
            printf("v[%d] = %d\n", i, v[i]);
            achei = 1;
        }
    }

    if (achei == 0) {
        printf("Nao existe nenhum numero maior que 50.\n");
    }

    return 0;
}