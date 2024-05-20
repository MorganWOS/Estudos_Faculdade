/******************************************************************************
Wesley De Oliveira Silva
4Bandas

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define TAMANHO 4 

typedef struct
{
  char nome[30];
  char estilo[30];
  int integrantes;
  int rank;
} banda;

int main () {
  banda vetbanda[TAMANHO];


// Definição
  strcpy (vetbanda[0].nome,"Costa Gold");
  strcpy (vetbanda[0].estilo,"rap");
  vetbanda[0].integrantes = 3;
  vetbanda[0].rank = 1;
  
  strcpy (vetbanda[1].nome,"Haikass");
  vetbanda[1].integrantes = 7;
  strcpy (vetbanda[1].estilo,"rap");
  vetbanda[1].rank = 3;
  
  strcpy (vetbanda[2].nome,"GR6");
  vetbanda[2].integrantes = 4;
  strcpy (vetbanda[2].estilo,"funk");
  vetbanda[2].rank = 2;
  
  printf("Qual o nome da banda: ");
  scanf("%s", vetbanda[3].nome);

  printf("Número de integrantes: ");
  scanf("%d", &vetbanda[3].integrantes);

  printf("Qual o estilo: ");
  scanf("%s", vetbanda[3].estilo);

  printf("Qual o rank: ");
  scanf("%d", &vetbanda[3].rank);

  
  
// Impressão

    for(int i=0;i<TAMANHO;i++){
      printf("\nBanda %d", i +1 );
      printf ("\n   nome: %s",vetbanda[i].nome);
      printf ("\n   integrantes: %d",vetbanda[i].integrantes);
      printf ("\n   estilo: %s",vetbanda[i].estilo);
      printf ("\n   rank: %d\n",vetbanda[i].rank);
    }
  
 return 0;
}


