#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, maior, menor, soma;
    int estoque[5][3];
    int totalArmazem[4];

    for(i=0; i<4; i++){
        printf("Digite o estoque dos 3 produtos do armazem %d:\n", i+1);
        for(j=0; j<3; j++){
            printf("Produto %d: ", j+1);
            scanf("%d", &estoque[i][j]);
        }
    }

    printf("\nDigite o custo de cada produto:\n");
    for(j=0; j<3; j++){
        printf("Produto %d: R$", j+1);
        scanf("%d", &estoque[4][j]);
    }

    printf("\nQuantidade total em cada armazem:\n");
    for(i=0; i<4; i++){
        soma = 0;
        for(j=0; j<3; j++){
            soma += estoque[i][j];
        }
        printf("Armazem %d: %d itens\n", i+1, soma);
        totalArmazem[i] = soma;
    }

    maior = 0;
    for(i=1; i<4; i++){
        if(estoque[i][1] > estoque[maior][1]){
            maior = i;
        }
    }
    printf("\nArmazem com maior estoque do produto 2: %d\n", maior+1);

    menor = 0;
    for(i=1; i<4; i++){
        if(totalArmazem[i] < totalArmazem[menor]){
            menor = i;
        }
    }
    printf("Armazem com menor estoque total: %d\n", menor+1);

    printf("\nCusto total de cada produto:\n");
    for(j=0; j<3; j++){
        soma = 0;
        for(i=0; i<4; i++){
            soma += estoque[i][j];
        }
        printf("Produto %d: R$%d\n", j+1, soma * estoque[4][j]);
    }

    printf("\nCusto total de cada armazem:\n");
    for(i=0; i<4; i++){
        soma = 0;
        for(j=0; j<3; j++){
            soma += estoque[i][j] * estoque[4][j];
        }
        printf("Armazem %d: R$%d\n", i+1, soma);
    }

    return 0;
}
