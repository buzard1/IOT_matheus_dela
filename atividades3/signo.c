#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int dia;
    int mes;
    
	printf("Desenvolvido por Matheus Dela\n");
    printf("Digite o dia que voce nasceu:\n");
    scanf("%d", &dia);

    printf("Digite o mes que voce nasceu (1-12):\n");
    scanf("%d", &mes);

    switch(mes)
    {
        case 1: // Janeiro
            if(dia <= 19)
                printf("Seu signo e Capricornio\n");
            else
                printf("Seu signo e Aquario\n");
            break;

        case 2: // Fevereiro
            if(dia <= 18)
                printf("Seu signo e Aquario\n");
            else
                printf("Seu signo e Peixes\n");
            break;
        case 3: // março
            if(dia <= 20)
                printf("Seu signo e Peixes\n");
            else
                printf("Seu signo e Áries\n");
            break;
        case 4: // abril
            if(dia <= 19)
                printf("Seu signo e Áries\n");
            else
                printf("Seu signo e Touro\n");
            break;
        case 5: // maio
            if(dia <= 20)
                printf("Seu signo e Touro\n");
            else
                printf("Seu signo e Gemeos\n");
            break;
        case 6: // junho
            if(dia <= 20)
                printf("Seu signo e Gemeos\n");
            else
                printf("Seu signo é Cancer\n");
            break;

        case 7: // Julho
            if(dia <= 22)
                printf("Seu signo e Cancer\n");
            else
                printf("Seu signo e Leao\n");
            break;

        case 8: // Agosto
            if(dia <= 22)
                printf("Seu signo e Leao\n");
            else
                printf("Seu signo e Virgem\n");
            break;

        case 9: // Setembro
            if(dia <= 22)
                printf("Seu signo e Virgem\n");
            else
                printf("Seu signo e Libra\n");
            break;

        case 10: // outubro
            if(dia <= 22)
                printf("Seu signo e Libra\n");
            else
                printf("Seu signo e Escorpiao\n");
            break;

        case 11: // novembro
            if(dia <= 21)
                printf("Seu signo e Escorpiao\n");
            else
                printf("Seu signo e Sagitario\n");
            break;

        case 12: // dezembro
            if(dia <= 21)
                printf("Seu signo e Sagitario\n");
            else
                printf("Seu signo e Capricornio\n");
            break;

        default:
            printf("Mes invalido!\n");
    }
}