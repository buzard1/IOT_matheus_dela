#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main(){
		setlocale(LC_ALL,"Portuguese");
		if(getchar()=='p')
			printf("Voce digitou p");
		else
			printf("Voce nao digitou p");
	}