#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	float salario,novosal;
	int opcao;
	
	printf("1.Imposto\n2.Novo salario\n3.Classificacao\n");
	printf("escolha a opcao(1-3):\n");
	scanf("%d", &opcao);
	
	switch(opcao)
	{
		case 1:
			printf("Digite o seu salario, para calcular o imposto: \n");
			scanf("%f",&salario);
			
			if(salario>850){
				novosal = salario - salario * 15 / 100;
				printf("O seu salario apos a aplicao do imposto e: %.2f", novosal);
				}
			else if(salario>=500 && salario<=850){
				novosal = salario - salario * 10 / 100;
				printf("O seu salario apos a aplicao do imposto e: %.2f", novosal);
				}
			else if(salario<500){
				novosal = salario - salario * 5 / 100;
				printf("O seu salario apos a aplicao do imposto e: %.2f", novosal);
			}
			break;
				
		case 2:
			
			printf("Digite o seu salario atual, para calcular o novo salario: ");
			scanf("%f",&salario);
			
			if(salario>1500){
				novosal = salario + 25;
				printf("O seu salario apos a aplicao do imposto e: %.2f", novosal);
				}
			else if(salario>=750 && salario<=1500){
				novosal = salario + 50;
				printf("O seu salario apos a aplicao do imposto e: %.2f", novosal);
				}
			else if(salario>=450 && salario<=749){
				novosal = salario + 75;
				printf("O seu salario apos a aplicao do imposto e: %.2f", novosal);
			}
			else if(salario<450){
				novosal = salario + 100;
				printf("O seu salario apos a aplicao do imposto e: %.2f", novosal);
			}
				break;
				
		case 3:
			
			printf("Digite o seu salario atual, para mostrar sua clasificacao: ");
			scanf("%f",&salario);
			
			if(salario>=0 && salario<=700){
				printf("Sua classificacao e mal remunerado");
			}else{
				printf("Sua classificacao e bem remunerado");
			}
				break;
	}
	
	
}