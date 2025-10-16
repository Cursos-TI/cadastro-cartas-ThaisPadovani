#include <stdio.h>

// --- SUPER TRUNFO --- //

int main() {
    // --- Variáveis para CARTA 1 ---
    char estado1;
    char codigodacarta1[20];
    char nomedacidade1[20];
    long unsigned int populacao1;
    float areakm2_1;
    float pib1;
    int numeropontosturisticos1;
    float densidadepopulacional1;
    float pibpercapta1;

    // --- Variáveis para CARTA 2 ---
    char estado2;
    char codigodacarta2[20];
    char nomedacidade2[20];
    long unsigned int populacao2;
    float areakm2_2; 
    float pib2;
    int numeropontosturisticos2;
    float densidadepopulacional2;
    float pibpercapta2;
    
        // CARTA 1

    printf("--- DADOS DA CARTA 1 ---\n");

    printf("Digite o Estado 1:\n");
    scanf("%c", &estado1);
    
    printf("Digite o Código da Carta 1:\n");
    scanf("%s", codigodacarta1);

    printf("Digite o Nome da Cidade 1:\n");
    scanf("%s", nomedacidade1);

    printf("Digite a População 1:\n");
    scanf("%lu", &populacao1);
    
    printf("Digite a Área km2_1:\n");
    scanf("%f", &areakm2_1);

    printf("Digite o PIB 1:\n");
    scanf("%f", &pib1);

    printf("Digite o Número de pontos Turísticos1:\n");
    scanf("%d", &numeropontosturisticos1);

    printf("Digite a Densidade Populacional 1:\n");
    scanf("%d", &densidadepopulacional1);

    printf("Digite o PIB percapta 1:\n");
    scanf("%f", &pibpercapta1);

    densidadepopulacional2 = populacao2 / areakm2_2;
    pibpercapta2 = pib2 / populacao2;
    
    // CARTA 2

    printf("\n--- DADOS DA CARTA 2 ---\n");

    printf("Digite o estado2 (uma letra):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta2:\n");
    scanf("%s", codigodacarta2);
    printf("Digite o nome da cidade2:\n");
    scanf("%s", nomedacidade2);
    printf("Digite a população2:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área em km2_2:\n");
    scanf("%f", &areakm2_2);
    printf("Digite o PIB2:\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos2:\n");
    scanf("%d", &numeropontosturisticos2);
    
    densidadepopulacional2 = populacao2 / areakm2_2;
    pibpercapta2 = pib2 / populacao2;

    // --- EXIBIÇÃO DAS CARTAS ---

    printf("\n===================================\n");
    printf("            CARTA 1: %s\n", nomedacidade1);
    printf("===================================\n");
    printf("1. População: %lu\n", populacao1);
    printf("2. Área km_2: %.2f\n", areakm2_1);
    printf("3. PIB: %.2f\n", pib1);
    printf("4. Pontos Turísticos: %d\n", numeropontosturisticos1);
    printf("5. Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("6. PIB per Capta: %.2f\n", pibpercapta1);
    printf("Estado: %c | Código: %s\n", estado1, codigodacarta1);
    printf("===================================\n\n");

    printf("===================================\n");
    printf("            CARTA 2: %s\n", nomedacidade2);
    printf("===================================\n");
    printf("População: %lu\n", populacao2);
    printf("Área km_2: %.2f\n", areakm2_2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", numeropontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capta: %.2f\n", pibpercapta2);
    printf("Estado: %c | Código: %s\n", estado2, codigodacarta2);
    printf("===================================\n\n");

    return 0;
    
    }
