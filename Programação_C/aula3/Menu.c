/******************************************************************************

28/03/24 - Wesley De Oliveira Silva
Mostrar o maior e o menor com Menu

*******************************************************************************/
#include <stdio.h>

int minimo(int a, int b, int c){
        //Calcula o menor dentre os números
        int menor;
        menor = a;
        if(b < menor){
        menor = b;
        }
        if(c < menor){
            menor = c;
        }
        return menor;
    }
    
    int max(int a, int b, int c){
        //Calcula o maior dentre os números
        int mai;
        mai = a;
        if(b > mai){
        mai = b;
        }
        if(c > mai){
            mai = c;
        }
        return mai;
    }
    
    int menu(int quantas){
        //Processa o menu e suas opções de saída
        while (1){
            printf("1 - Menor\n2 - Maior\n3 - FIM!\n Digite sua opção: ");
            scanf("%d", &quantas);
            if(quantas == 1){
            printf("O menor é: %d\n", menor);
            }
            if(quantas == 2){
                printf("O maior é: %d\n", mai);
            }
            if(quantas == 3){
                printf("Fim!!!");
                break;
            }
        }
int main()
{
    //Entrada
    int a, b, c, menor, mai, quantas;
    
    printf("Digite o valor de a: ");
    scanf ("%d", &a);

    printf("Digite o valor de b: ");
    scanf ("%d", &b);

    printf("Digite o valor de c: ");
    scanf ("%d", &c);
    
    //processamento
    int minimo(int a, int b, int c){
        //Calcula o menor dentre os números
        int menor;
        menor = a;
        if(b < menor){
        menor = b;
        }
        if(c < menor){
            menor = c;
        }
        return menor;
    }
    
    int max(int a, int b, int c){
        //Calcula o maior dentre os números
        int mai;
        mai = a;
        if(b > mai){
        mai = b;
        }
        if(c > mai){
            mai = c;
        }
        return mai;
    }
    
    int menu(int quantas){
        //Processa o menu e suas opções de saída
        while (1){
            printf("1 - Menor\n2 - Maior\n3 - FIM!\n Digite sua opção: ");
            scanf("%d", &quantas);
            if(quantas == 1){
            printf("O menor é: %d\n", menor);
            }
            if(quantas == 2){
                printf("O maior é: %d\n", mai);
            }
            if(quantas == 3){
                printf("Fim!!!");
                break;
            }
        }
    }
    
    
    menor = minimo(a, b, c);
    mai = max(a, b, c);


//saída
    menu(quantas);




    return 0;
}