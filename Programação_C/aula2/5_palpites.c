/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int segredo = 12, palpite, tentativa=1;
    
    
    while (tentativa <= 5) {
          printf("Tente adivinhar o numero (tentativa %d):", tentativa);
          scanf ("%d", &palpite);
          tentativa = tentativa + 1;
    }
    
    if (segredo == palpite)
       printf ("Acertou !");
    else
       printf ("Errou !");

    return 0;
}
