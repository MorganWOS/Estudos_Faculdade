#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int num_ran = rand() % 100, num_gerados, s=0;
    printf("Quantos números deseja gerar: ");
    scanf("%d", &num_gerados);
    if((num_gerados < 6) || (num_gerados > 15)){
            printf("Escolha números entre 6 até 15");
    }
    else{
        printf("Gerando números...\n");
        while (s <= num_gerados){
            printf("B");
            printf(num_ran);
            s += 1;
        }
        }
    return 0;
}

