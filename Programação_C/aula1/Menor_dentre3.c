/******************************************************************************

Wesley 29/02/2024

Menor dentre 3

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variaveis
    int menor= 0, a, b, c;
    
    //Entrada
    printf("Digite o valor da primeira: ");
    scanf("%d", &a);
    
    printf("Digite o valor da segunda: ");
    scanf("%d", &b);
    
    printf("Digite o valor da terceira: ");
    scanf("%d", &c);
    
    //Processamento
    menor = a;
    if (b < menor) menor = b;
    if (c < menor) menor = c;
    
    
    //Saida
    printf("O menor número é %d", menor);

    return 0;
}

