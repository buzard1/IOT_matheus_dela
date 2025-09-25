#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade;
    printf("Desenvolvido por Matheus Dela\n");
    printf("Digite sua idade ");
    scanf("%d", &idade);
    if(idade<=11)
    printf("crianca");
    else if(idade <=18)
    printf("adolecente");
    else if(idade <=24)
    printf("jovem");
    else if(idade <=59 )
    printf("adulto");
    else
    printf("idoso");
}