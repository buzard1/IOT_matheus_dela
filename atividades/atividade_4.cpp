#include <stdio.h>
#include <locale.h>
int main(){
	int num1,num2,num3,num4,soma;
	
    printf("\nDigite o primeiro numero a ser somado: ");
    scanf("%d", &num1);
    
    printf("\nDigite o segundo numero a ser somado: ");
    scanf("%d", &num2);
    
    printf("\nDigite o terceiro numero a ser somado: ");
    scanf("%d", &num3);
    
    printf("\nDigite o quarto numero a ser somado: ");
    scanf("%d", &num4);
    
    soma = num1+num2+num3+num4;
    
    printf("Soma: %d",soma);
    
    //Matheus dela libera dos anjos
    
    getchar();
    return 0;
}