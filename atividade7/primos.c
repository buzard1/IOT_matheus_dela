#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[9];
    int i, j, primo;
	
	printf("Desenvolvido por Matheus Dela\n");
    printf("Digite 9 numeros inteiros:\n");
    for (i = 0; i < 9; i++) {
        scanf("%d", &v[i]);
    }

    printf("\nNumeros primos e suas posicoes:\n");
    for (i = 0; i < 9; i++) {
        if (v[i] > 1) {
            primo = 1; // assume que é primo
            for (j = 2; j < v[i]; j++) {
                if (v[i] % j == 0) {
                    primo = 0; // achou divisor, não é primo
                }
            }
            if (primo == 1) {
                printf("v[%d] = %d\n", i, v[i]);
            }
        }
    }

    return 0;
}