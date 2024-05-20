/******************************************************************************

Wesley 29/02/2024

Maior, menor e soma dentre 5

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variaveis
    int soma= 0, maior = 0, menor = 0, a, b, c, d, e;
    
    //Entrada
    printf("Digite o valor da primeira: ");
    scanf("%d", &a);
    
    printf("Digite o valor da segunda: ");
    scanf("%d", &b);
    
    printf("Digite o valor da terceira: ");
    scanf("%d", &c);
    
    printf("Digite o valor da quarta: ");
    scanf("%d", &d);
    
    printf("Digite o valor da quinta: ");
    scanf("%d", &e);
    
    //Processamento
    soma = a + b + c + d + e;
    
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    if (d < menor) menor = d;
    if (e < menor) menor = e;
    
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;
    if (e > maior) maior = e;
    
    //Saida
    printf("A soma desses números é %d\n", soma);
    printf("O menor dentre esses números é %d\n", menor);
    printf("O maior dentre esses números é %d\n", maior);

    return 0;
}


