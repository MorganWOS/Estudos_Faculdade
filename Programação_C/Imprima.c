/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void imprima(char *texto){
    printf("%s", texto);
}
int soma(int num1, int num2){
    int sum;
    sum = num1 + num2;
    return sum;
}
int main()
{
    int a = 2, b = 2, resultado;
    imprima("Hello World");
    imprima("\nWesley");
    resultado = soma(a, b);
    printf("Soma = %d", resultado);

    return 0;
}
