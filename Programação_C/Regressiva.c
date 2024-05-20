/******************************************************************************

Função de regressiva

*******************************************************************************/
#include <stdio.h>

void regressiva(int num1, int num2, int num3){
    for(int i=num1;i>num2;i = i - num3){
        printf("\n%d", i);
    }
}

int main()
{
    regressiva(10,1, 2);

    return 0;
}
