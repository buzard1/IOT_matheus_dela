#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); // Localização correta para português
    
    float salario, novosal, imposto,salimp;
    
    // Mostra mensagem antes da leitura do salário
    printf("\nDigite o salario do funcionario: ");
    
    // Recebe o salário
    scanf("%f", &salario);
    
    // Calcula a bonificação
    novosal = salario + salario * 5 / 100;
    
    // Calcula o imposto sobre o novo salário
    imposto = salario * 7 / 100;
    
    //aplicação do imposto
    salimp = novosal - imposto;
    
    // Mostra o imposto
    printf("\nSalario base = %.2f", salario);
    printf("\nSalario apos a bonificacao = %.2f", novosal);
    printf("\nImposto = %.2f", imposto);
    printf("\nSalario bonificado apos a aplicacao dos imposto = %.2f", salimp);
    
    // Espera o usuário pressionar Enter
    getchar();
    
    return 0;
}
