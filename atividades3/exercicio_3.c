#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	int numero1;
	int numero2;

	printf("Desenvolvido por Matheus Dela\n");
    printf("Digite o primeiro numero ");
    	scanf("%d", &numero1);
    printf("Digite o segundo numero ");
    	scanf("%d", &numero2);
    	
	if(numero1<numero2)
	printf("%d %d",numero1,numero2);
	else
	printf("%d %d",numero2,numero1);
}