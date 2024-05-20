/******************************************************************************

Wesley 29/02/2024

Encontrar o maior número dentre 5

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variaveis
    int maior= 0, a, b, c, d, e ;
    
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
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (d > maior) maior = d;
    if (e > maior) maior = e;
    
    
    //Saida
    printf("O maior número é %d", maior);

    return 0;
}