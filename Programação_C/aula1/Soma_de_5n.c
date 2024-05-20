/******************************************************************************

Wesley 29/02/2024

Somar 5 números

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Variaveis
    int soma= 0, a, b, c, d, e;
    
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
    
    
    //Saida
    printf("A soma desses números é %d", soma);

    return 0;
}