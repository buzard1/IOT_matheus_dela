#include <stdio.h>

int main() {
    int i = 0;
    int qtd_barato = 0, qtd_normal = 0, qtd_caro = 0;
    float preco, imposto, estocagem, preco_final;
    float soma_adicionais = 0, soma_impostos = 0;
    float maior_preco = 0, menor_preco = 0;

    do {
        char refri, categoria;
        printf("\nProduto %d\n", i+1);

        printf("Digite o preco unitario: ");
        scanf("%f", &preco);


        if (preco <= 20) {
        	printf("Digite a categoria (A/L/V): ");
        	scanf(" %c", &categoria);
            if (categoria == 'A') estocagem = 2.0;
            else if (categoria == 'L') estocagem = 3.0;
            else estocagem = 4.0;

        } 
        else if (preco > 20 && preco <= 50) {
        	
        printf("Digite a refrigeracao (S/N): ");
        scanf(" %c", &refri);
        	
            if (refri == 'S') {
                if (categoria == 'A') estocagem = 6.0;
                else if (categoria == 'L') estocagem = 0.0;
                else estocagem = 4.0;
            } else {
                if (categoria == 'A') estocagem = 0.0;
                else if (categoria == 'L') estocagem = 1.0;
                else estocagem = 2.0;
            }
        } 
        else {
        printf("Digite a refrigeracao (S/N): ");
        scanf(" %c", &refri);

        printf("Digite a categoria (A/L/V): ");
        scanf(" %c", &categoria);

            if (refri == 'S') {
                if (categoria == 'A') estocagem = 5.0;
                else if (categoria == 'L') estocagem = 2.0;
                else estocagem = 4.0;
            } else {
                if (categoria == 'A' || categoria == 'V') estocagem = 0.0;
                else estocagem = 1.0;
            }
        }

        if (categoria == 'A' && refri == 'S')
            imposto = preco * 0.04f;
        else
            imposto = preco * 0.02f;

        preco_final = preco + estocagem + imposto;

        if (preco_final <= 20) qtd_barato++;
        else if (preco_final > 20 && preco_final <= 100) qtd_normal++;
        else qtd_caro++;

        soma_adicionais += estocagem + imposto;
        soma_impostos += imposto;

        if (i == 0) {
            maior_preco = menor_preco = preco_final;
        } else {
            if (preco_final > maior_preco) maior_preco = preco_final;
            if (preco_final < menor_preco) menor_preco = preco_final;
        }

        i++;
    } while (i < 12);

    printf("\n--- RESULTADOS ---\n");
    printf("Media dos valores adicionais: %.2f\n", soma_adicionais / 12);
    printf("Maior preco final: %.2f\n", maior_preco);
    printf("Menor preco final: %.2f\n", menor_preco);
    printf("Total dos impostos: %.2f\n", soma_impostos);
    printf("Qtd barato: %d\n", qtd_barato);
    printf("Qtd normal: %d\n", qtd_normal);
    printf("Qtd caro: %d\n", qtd_caro);

    return 0;
}