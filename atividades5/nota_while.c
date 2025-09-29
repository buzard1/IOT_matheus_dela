
#include <stdio.h>

int main(){
    int i = 1;
    float nota1, nota2, mediaaluno, somamedia = 0;
    int aprovados = 0, exame = 0, reprovados = 0;
	printf("Desenvolvido por Matheus Dela\n");

    while (i <=6){
        printf("\nDigite a primeira nota do aluno %d: ", i);
        scanf("%f", &nota1);
        printf("Digite a segunda nota do aluno %d: ", i);
        scanf("%f", &nota2);

        mediaaluno = (nota1 + nota2) / 2.0;
        somamedia += mediaaluno;
        printf("Media do aluno %d = %.2f -> ", i, mediaaluno);

        if (mediaaluno <=3){
            printf("Reprovado\n");
            reprovados++;
        } else if (mediaaluno < 7){
            printf("Exame\n");
            exame++;
        } else {
            printf("Aprovado\n");
            aprovados++;
        }
        i++;
    }
    printf("\nTotal de alunos aprovados: %d\n", aprovados);
    printf("Total de alunos em exame: %d\n", exame);
    printf("Total de alunos reprovados: %d\n", reprovados);
    printf("Media da turma: %.2f\n", somamedia / 6);
}