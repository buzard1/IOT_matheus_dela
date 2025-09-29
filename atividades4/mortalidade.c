#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo[5];
    int veiculos[5];
    int acidentes[5];
    float indice[5];
    int i;

    float maiorIndice, menorIndice;
    int cidadeMaior, cidadeMenor;

    int somaVeiculos = 0;
    float mediaVeiculos;

    int somaAcidentesMenos2000 = 0;
    int contMenos2000 = 0;
    float mediaAcidentesMenos2000;


    printf("=== Estatística de Acidentes ===\n");
    printf("Desenvolvido por Matheus Dela\n");

    for (i = 0; i < 5; i++) {
        printf("\nCidade %d:\n", i + 1);
        printf("Digite o codigo da cidade: ");
        scanf("%d", &codigo[i]);
        printf("Digite o numero de veiculos de passeio: ");
        scanf("%d", &veiculos[i]);
        printf("Digite o numero de acidentes com vitimas: ");
        scanf("%d", &acidentes[i]);
        indice[i] = (float) acidentes[i] / veiculos[i];
    }

    maiorIndice = indice[0];
    menorIndice = indice[0];
    cidadeMaior = codigo[0];
    cidadeMenor = codigo[0];

    for (i = 0; i < 5; i++) {
        if (indice[i] > maiorIndice) {
            maiorIndice = indice[i];
            cidadeMaior = codigo[i];
        }
        if (indice[i] < menorIndice) {
            menorIndice = indice[i];
            cidadeMenor = codigo[i];
        }
        somaVeiculos += veiculos[i];
        if (veiculos[i] < 2000) {
            somaAcidentesMenos2000 += acidentes[i];
            contMenos2000++;
        }
    }

    mediaVeiculos = (float) somaVeiculos / 5;

    if (contMenos2000 > 0)
        mediaAcidentesMenos2000 = (float) somaAcidentesMenos2000 / contMenos2000;
    else
        mediaAcidentesMenos2000 = 0;

    printf("\n--- Resultados ---\n");
    printf("Maior índice de acidentes: %.4f (Cidade %d)\n", maiorIndice, cidadeMaior);
    printf("Menor índice de acidentes: %.4f (Cidade %d)\n", menorIndice, cidadeMenor);
    printf("Média de veículos nas 5 cidades: %.2f\n", mediaVeiculos);
    if (contMenos2000 > 0)
        printf("Média de acidentes nas cidades com menos de 2000 veículos: %.2f\n", mediaAcidentesMenos2000);
    else
        printf("Nenhuma cidade possui menos de 2000 veículos.\n");

    return 0;
}