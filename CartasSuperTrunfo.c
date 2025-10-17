#include <stdio.h>

int main() {

// Variáveis para CARTA 1 

char estado1;
char codigodacarta1[20];
char nomedacidade1[20];
unsigned long int populacao1;
float areakm2_1;
float pib1;
int numeropontosturisticos1;
float densidadepopulacional1;
float pibpercapta1;

// Variáveis para CARTA 2

char estado2;
char codigodacarta2[20];
char nomedacidade2[20];
unsigned long int populacao2;
float areakm2_2;
float pib2;
int numeropontosturisticos2;
float densidadepopulacional2;
float pibpercapta2;

//CARTA 1 

printf("--- DADOS DA CARTA 1 ---\n");

printf("Estado: ");
scanf(" %c", &estado1);

printf("Código: ");
scanf("%s", codigodacarta1);

printf("Cidade: ");
scanf("%s", nomedacidade1);

printf("População: ");
scanf("%lu", &populacao1);

printf("Área (km²): ");
scanf("%f", &areakm2_1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Pontos Turísticos: ");
scanf("%d", &numeropontosturisticos1);

// Cálculos automáticos

densidadepopulacional1 = populacao1 / areakm2_1;
pibpercapta1 = pib1 / populacao1;

//CARTA 2 

printf(" DADOS DA CARTA 2\n");

printf("Estado: ");
scanf(" %c", &estado2);

printf("Código: ");
scanf("%s", codigodacarta2);

printf("Cidade: ");
scanf("%s", nomedacidade2);

printf("População: ");
scanf("%lu", &populacao2);

printf("Área (km²): ");
scanf("%f", &areakm2_2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Pontos Turísticos: ");
scanf("%d", &numeropontosturisticos2);

// Cálculos automáticos

densidadepopulacional2 = populacao2 / areakm2_2;
pibpercapta2 = pib2 / populacao2;

printf("CARTA 1\n");

printf("Cidade: %s (%c)\n", nomedacidade1, estado1);
printf("Código: %s\n", codigodacarta1);
printf("População: %lu | Área: %.2f km²\n", populacao1, areakm2_1);
printf("PIB: %.2f | PIB per capita: %.2f\n", pib1, pibpercapta1);
printf("Densidade: %.2f | Pontos Turísticos: %d\n", densidadepopulacional1, numeropontosturisticos1);

printf("CARTA 2\n");

printf("Cidade: %s (%c)\n", nomedacidade2, estado2);
printf("Código: %s\n", codigodacarta2);
printf("População: %lu | Área: %.2f km²\n", populacao2, areakm2_2);
printf("PIB: %.2f | PIB per capita: %.2f\n", pib2, pibpercapta2);
printf("Densidade: %.2f | Pontos Turísticos: %d\n", densidadepopulacional2, numeropontosturisticos2);

return 0;

}
