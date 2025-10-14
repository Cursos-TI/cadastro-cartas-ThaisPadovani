#include <stdio.h>

int main() { 
  // --- Variáveis para CARTA 1 ---

  char estado1;
  char codigodacarta1[20];
  char nomedacidade1[20];
  int populacao1;
  float areakm1;
  float PIB1;
  int numeropontosturisticos1;

  // --- Variáveis para CARTA 2 ---

  char estado2;
  char codigodacarta2[20];
  char nomedacidade2[20];
  int populacao2;
  float areakm2;
  float PIB2;
  int numeropontosturisticos2;

  //CARTA 1

  printf("Digite o estado1 (uma Letra): \n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta1: \n");
  scanf("%s", codigodacarta1);

  printf("Digite o nome da cidade1: \n");
  scanf("%s", nomedacidade1);

  printf("Digite a população1: \n");
  scanf("%d", &populacao1);

  printf("Digite a área em km1: \n");
  scanf("%f", &areakm1);

  printf("Digite o PIB1: \n");
  scanf("%f", &PIB1);

  printf("Digite o número de pontos turísticos1: \n");
  scanf("%d", &numeropontosturisticos1);

  //Carta 2

  printf("Digite o estado2 (uma letra): \n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta2: \n");
  scanf("%s", codigodacarta2);

  printf("Digite o nome da cidade2: \n");
  scanf("%s", nomedacidade2);

  printf("Digite a população2: \n");
  scanf("%d", &populacao2);

  printf("Digite a área em km2: \n");
  scanf("%f", &areakm2);

  printf("Digite o PIB2: \n");
  scanf("%f", &PIB2);

  printf("Digite o número de pontos turísticos2: \n");
  scanf("%d", &numeropontosturisticos2);

  printf("Carta 1: Estado %c, \n", estado1);
  printf("Carta 1: Código da Carta %s, \n", codigodacarta1);
  printf("Carta 1: %s, \n", nomedacidade1);
  printf("Carta 1: %d, \n", populacao1);
  printf("Carta 1: %f, \n", areakm1);
  printf("Carta 1: %f, \n", PIB1);
  printf("Carta 1: %d, \n", numeropontosturisticos1);

  printf("Carta 2: Estado %c, \n", estado2);
  printf("Carta 2: Código da Carta %s, \n", codigodacarta2);
  printf("Carta 2: %s, \n", nomedacidade2);
  printf("Carta 2: %d, \n", populacao2);
  printf("Carta 2: %f, \n", areakm2);
  printf("Carta 2: %f, \n", PIB2);
  printf("Carta 2: %d, \n", numeropontosturisticos2);


    return 0;

}