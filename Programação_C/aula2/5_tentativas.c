/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int segredo = 12, palpite, tentativa = 1;
    while(tentativa <= 5){
        printf("Tente acertar o número (tentativa %d): ", tentativa);
        scanf("%d", &palpite);
        if(segredo == palpite){
            printf("Acertou!!");
            break;
        }
        tentativa += 1;
    }
    if(segredo != palpite){
        printf("Errou!!!");
    }
    
    

    return 0;
}


