#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float salario,porcentual;
	int i;
	
	printf("Desenvolvido por Matheus Dela\n");
	printf("Digite o seu salario para calcular o aumento salarial entre 2019-2025:");
	scanf("%f",&salario);
	porcentual = 1.5;
	for(i=2019;i<=2025;i++){
		salario = salario + salario * porcentual/100;
		porcentual = porcentual * 2;
	}
	printf("O salario atual deste funcionario e %.2f",salario);
	
}