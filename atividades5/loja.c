#include <stdio.h>
#include <stdlib.h>

int main() {
    float preco[10], total[10];
    int qtd[10];
    int i, maisVendido = 0;
    float totalGeral = 0, comissao, salarioBase = 545.0;

	printf("Desenvolvido por Matheus Dela\n");
    printf("Digite o preco unitario dos 10 objetos:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &preco[i]);
    }

    printf("Digite a quantidade vendida de cada objeto:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &qtd[i]);
        total[i] = preco[i] * qtd[i];
        totalGeral = totalGeral + total[i];
        if (qtd[i] > qtd[maisVendido]) {
            maisVendido = i;
        }
    }

    printf("\nRELATORIO DE VENDAS:\n");
    for (i = 0; i < 10; i++) {
        printf("Objeto %d: Qtd %d | Preco %.2f | Total %.2f\n", i, qtd[i], preco[i], total[i]);
    }

    comissao = totalGeral * 0.05;
    printf("\nValor geral das vendas: %.2f\n", totalGeral);
    printf("Comissao do vendedor: %.2f\n", comissao);
    printf("Salario final: %.2f\n", salarioBase + comissao);
    printf("Objeto mais vendido: Objeto %d (qtd %d)\n", maisVendido, qtd[maisVendido]);


    return 0;
}