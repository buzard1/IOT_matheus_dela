#include <stdio.h>
#include <stdlib.h>

int main() {
	int M[2][2], R[2][2];
	int i,j,maior;
	
	
	//Entrada de dados
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite o elemento[%d][%d]: ",i,j);
			scanf("%d",&M[i][j]);
		}
	}
	
	
	//Mostrando a matriz M
	printf("\nMatriz M:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%3d",M[i][j]);
		}
		printf("\n");
	}
	
	//Encontrando o maior elemento da matriz M
	
	maior = M[0][0];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(M[i][j] > maior){
				maior = M[i][j];
			}
		}
	}
	printf("\nO maior elemento da matriz e: %d",maior);
	printf("\n");
	
	//calculo da matriz R
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			R[i][j] = M[i][j] * maior;
		}
	}
	
	//mostrando a raiz R
	printf("\nMatriz R:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%3d",R[i][j]);
		}
		printf("\n");
	}
	
}