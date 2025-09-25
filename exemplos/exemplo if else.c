#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	main(){
		setlocale(LC_ALL,"Portuguese");
		int numero;
		printf("Digite um numero qualquer\n");
		scanf("%d",&numero);
		if(numero<0)
			printf("numero menor que zero");
		else if(numero<10)
			printf("Numero >=0 e <10");
		else if(numero<100)
			printf("numero >=10 e <100");
		else
			printf("numero >100");
	}