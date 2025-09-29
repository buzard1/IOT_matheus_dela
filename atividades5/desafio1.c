#include <stdio.h>

int main() {
    int i = 1;
    float preco, imposto, custoEst, precoFinal;
    float somaAdicional = 0, maiorPreco = 0, menorPreco = 999999, somaImpostos = 0;
    int barato = 0, normal = 0, caro = 0;
    char refrig, categ;

	printf("Desenvolvido por Matheus Dela\n");
    while (i <= 12) {
        printf("\nProduto %d\n", i);
        printf("Digite o preco unitario: ");
        scanf("%f", &preco);


        //calculo do custo de estocagem
        // entre 0 e 20
        if (preco <= 20) {
        	printf("Digite a categoria (A=Alim, L=Limpeza, V=Vestuario): ");
        	scanf(" %c", &categ);
            if (categ == 'A') custoEst = 2.0;
            else if (categ == 'L') custoEst = 3.0;
            else if (categ == 'V') custoEst = 4.0;
        } 
        else if (preco > 20 && preco <= 50) { //entre 20 e 50
        	printf("Precisa de refrigeracao (S/N): ");
       		scanf(" %c", &refrig);
            if (refrig == 'S') custoEst = 6.0;
            else custoEst = 0.0;
        } 
        else { // maior que 50
            printf("Precisa de refrigeracao (S/N): ");
        	scanf(" %c", &refrig);
        	printf("Digite a categoria (A=Alim, L=Limpeza, V=Vestuario): ");
        	scanf(" %c", &categ);
            if (refrig == 'S') {
                if (categ == 'A') custoEst = 5.0;
                else if (categ == 'L') custoEst = 2.0;
                else if (categ == 'V') custoEst = 4.0;
            } else { // refrig == 'N'
                if (categ == 'L') custoEst = 1.0;
                else custoEst = 0.0; // A ou V
            }
        }

        //calculo do imposto
        if (categ == 'A' && refrig == 'S') {
            imposto = preco * 0.04;
        } else {
            imposto = preco * 0.02;
        }

        //preço final
        precoFinal = preco + custoEst + imposto;

        //classificacao
        if (precoFinal <= 20) {
            barato++;
            printf("Preço final: %.2f -> Barato\n", precoFinal);
        } else if (precoFinal <= 100) {
            normal++;
            printf("Preço final: %.2f -> Normal\n", precoFinal);
        } else {
            caro++;
            printf("Preço final: %.2f -> Caro\n", precoFinal);
        }

        //estatisticas
        somaAdicional += (custoEst + imposto);
        somaImpostos += imposto;

        if (precoFinal > maiorPreco) maiorPreco = precoFinal;
        if (precoFinal < menorPreco) menorPreco = precoFinal;

        i++;
    }

    //resultados finais
    printf("\nResumo Final:\n");
    printf("Media dos valores adicionais (custo + imposto): %.2f\n", somaAdicional / 12);
    printf("Maior preco final: %.2f\n", maiorPreco);
    printf("Menor preco final: %.2f\n", menorPreco);
    printf("Total de impostos: %.2f\n", somaImpostos);
    printf("Qtd produtos baratos: %d\n", barato);
    printf("Qtd produtos normais: %d\n", normal);
    printf("Qtd produtos caros: %d\n", caro);

    return 0;
}