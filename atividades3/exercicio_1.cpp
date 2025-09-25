#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int numero1;
	int numero2;
	int numero3;
	
	printf("Desenvolvido por Matheus Dela\n");
	printf("Digite o primeiro numero: \n");
	scanf("%d",&numero1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d",&numero2);
	
	printf("Digite o primeiro numero: \n");
	scanf("%d",&numero3);
	
	if(numero1>numero2 && numero1>numero3)
		printf("o primeiro numero e maior:%d",numero1);
		
	else if(numero2>numero1 && numero2>numero3)
		printf("o segundo numero e maior:%d",numero2);
		
	else if(numero3>numero1 && numero3>numero2)
		printf("o terceiro numero e maior:%d",numero3);
}