#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salario, novosal;
    
    // Mostra mensagem antes da leitura do salário
    printf("\nDigite o salário do funcionário: ");
    
    // Recebe o salário
    scanf("%f%*c", &salario);
    
    // Calcula o novo salário
    novosal = salario + salario * 25 / 100;
    
    // Mostra o novo salário
    printf("\nNovo salário = %0.2f", novosal);
    
    // Espera o usuário pressionar Enter
    getchar();
    
    return 0;
}
