#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	int ano,anoatual;
	float salario,porcentual;
	printf("Desenvolvido por Matheus Dela\n");
	porcentual = 1.5;
	salario = 1000;
	ano = 2020;
	printf("Digite o ano atual:  ");
	scanf("%d",&anoatual);
	while(ano<anoatual){
		salario = salario + salario * porcentual/100;
		porcentual = porcentual * 2;
		ano = ano + 1;
	}
		printf("O salario atual deste funcionario e %.2f",salario);

}