#include <stdio.h>
#include <locale.h>

int main() {
    float deposito, juros, rendimento, valor_total;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite o valor da taxa de juros em %: ");
    scanf("%f", &juros);

    juros = juros / 100;  // Converte porcentagem para decimal

    rendimento = deposito * juros;

    valor_total = deposito + rendimento;

    printf("\nValor do rendimento: %.2f", rendimento);
    printf("\nValor total apos o rendimento: %.2f\n", valor_total);
    
	getchar();
    return 0;
}
