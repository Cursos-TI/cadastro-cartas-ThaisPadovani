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

printf("\nEstado: ");
scanf(" %c", &estado1);

printf("\nCódigo: ");
scanf(" %s", codigodacarta1);

printf("\nCidade: ");
scanf(" %s", nomedacidade1);

printf("\nPopulação: ");
scanf(" %lu", &populacao1);

printf("\nÁrea (km²): ");
scanf(" %f", &areakm2_1);

printf("\nPIB: ");
scanf(" %f", &pib1);

printf("\nPontos Turísticos: ");
scanf(" %d", &numeropontosturisticos1);

// Cálculos automáticos

densidadepopulacional1 = (float)populacao1 / areakm2_1;
pibpercapta1 = pib1 / (float)populacao1;

//CARTA 2 

printf(" DADOS DA CARTA 2\n");

printf("\nEstado: ");
scanf(" %c", &estado2);

printf("\nCódigo: ");
scanf(" %s", codigodacarta2);

printf("\nCidade: ");
scanf(" %s", nomedacidade2);

printf("\nPopulação: ");
scanf(" %lu", &populacao2);

printf("\nÁrea (km²): ");
scanf(" %f", &areakm2_2);

printf("\nPIB: ");
scanf(" %f", &pib2);

printf("\nPontos Turísticos: ");
scanf(" %d", &numeropontosturisticos2);

// Cálculos automáticos

densidadepopulacional2 = (float)populacao2 / areakm2_2;
pibpercapta2 = pib2 / (float)populacao2;

printf("\n===== CARTA 1 =====\n");

    printf("Cidade: %s (%c)\n", nomedacidade1, estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areakm2_1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per capita: %.2f\n", pibpercapta1);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("Pontos Turísticos: %d\n", numeropontosturisticos1);

    printf("\n===== CARTA 2 =====\n");

    printf("Cidade: %s (%c)\n", nomedacidade2, estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areakm2_2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f\n", pibpercapta2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("Pontos Turísticos: %d\n", numeropontosturisticos2);
    
    return 0;

}