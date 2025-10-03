#include <stdio.h>
#include <stdlib.h>

int main() {
    char carros[5][20];
    float consumo[5];
    int i, pos = 0;

	printf("Desenvolvido por Matheus Dela\n");
    printf("Digite os modelos de 5 carros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", carros[i]);
    }

    printf("Digite o consumo (km/l) de cada carro:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &consumo[i]);
        if (consumo[i] > consumo[pos]) {
            pos = i;
        }
    }

    printf("\nCarro mais economico: %s (%.1f km/l)\n", carros[pos], consumo[pos]);

    printf("\nLitros gastos para percorrer 1000 km:\n");
    for (i = 0; i < 5; i++) {
        printf("%s: %.2f litros\n", carros[i], 1000 / consumo[i]);
    }

    return 0;
}
