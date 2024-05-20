/******************************************************************************

Wesley 29/02/2024

Encontrar o maior número dentre 3

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variaveis
    int maior= 0, a, b, c;
    
    //Entrada
    printf("Digite o valor da primeira: ");
    scanf("%d", &a);
    
    printf("Digite o valor da segunda: ");
    scanf("%d", &b);
    
    printf("Digite o valor da terceira: ");
    scanf("%d", &c);
    
    //Processamento
    maior = a;
    if (b > maior) maior = b;
    if (c > maior) maior = c;
    
    //Saida
    printf("O maior número é %d", maior);

    return 0;
}
