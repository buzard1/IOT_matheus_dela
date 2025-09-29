#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, i;
    char sexo;
    int tempo;

    int totalM = 0, totalF = 0;
    int mortosM = 0, mortosF = 0;
    int mortos24 = 0;

    float percM, percF, perc24;

	printf("Desenvolvido por Matheus Dela\n");
    printf("Digite o número de crianças nascidas no período: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nCriança %d:\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Tempo de vida em meses (0 se morreu ao nascer): ");
        scanf("%d", &tempo);

        if (sexo == 'M' || sexo == 'm') {
            totalM++;
            if (tempo == 0) mortosM++;
        } else if (sexo == 'F' || sexo == 'f') {
            totalF++;
            if (tempo == 0) mortosF++;
        }

        if (tempo <= 24) mortos24++;
    }

    if (totalF > 0)
        percF = (float) mortosF * 100 / totalF;
    else
        percF = 0;

    if (totalM > 0)
        percM = (float) mortosM * 100 / totalM;
    else
        percM = 0;

    perc24 = (float) mortos24 * 100 / n;

    printf("\n--- Resultados ---\n");
    printf("%% de crianças do sexo feminino mortas: %.2f%%\n", percF);
    printf("%% de crianças do sexo masculino mortas: %.2f%%\n", percM);
    printf("%% de crianças que viveram 24 meses ou menos: %.2f%%\n", perc24);

    return 0;
}