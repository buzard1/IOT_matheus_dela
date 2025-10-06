#include <stdio.h>
#include <string.h>
#include <locale.h>

void sub_rotina1()
{
    printf("mostrando uma mensagem\n");
}

void sub_rotina2()
{
    int a, b, c;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    c = a - b;
    printf("Resultado = %d", c);
}

int sub_rotina3(int x, int y)
{
    int res;
    res = x * y;
    return res;
}