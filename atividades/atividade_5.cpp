#include <stdio.h>
#include <locale.h>
int main(){
	float nota1, nota2, nota3,media;
	
	printf("\nDigite a primeiro nota: ");
    scanf("%f", &nota1);
    
    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);
    
    media = nota1+nota2+nota3;
    media = media/3;
    
    printf("Soma: %f",media);
    
    //Matheus dela libera dos anjos
    getchar();
    return 0;
}