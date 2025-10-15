#include <stdio.h>

// --- SUPER TRUNFO ---

int main() {
    // --- Variáveis para CARTA 1 ---
    char estado1;
    char codigodacarta1[20];
    char nomedacidade1[20];
    int populacao1;
    float areakm2_1; 
    float PIB1;
    int numeropontosturisticos1;
    float densidadepopulacional1;
    float PIBpercapta1;

    // --- Variáveis para CARTA 2 ---
    char estado2;
    char codigodacarta2[20];
    char nomedacidade2[20];
    int populacao2;
    float areakm2_2; 
    float PIB2;
    int numeropontosturisticos2;
    float densidadepopulacional2;
    float PIBpercapta2;
    
        // CARTA 1

    printf("--- DADOS DA CARTA 1 ---\n");

    printf("Digite o estado1 (uma Letra): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta1: \n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade1: \n");
    scanf("%s", nomedacidade1);

    printf("Digite a população1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km²1: \n");
    scanf("%f", &areakm2_1); 
    printf("Digite o PIB1: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos1: \n");
    scanf("%d", &numeropontosturisticos1);
    
    densidadepopulacional1 = (float)populacao1 / areakm2_1;
    PIBpercapta1 = (float)PIB1 / populacao1;

    // CARTA 2

    printf("\n--- DADOS DA CARTA 2 ---\n");

    printf("Digite o estado2 (uma letra): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta2: \n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade2: \n");
    scanf("%s", nomedacidade2);

    printf("Digite a população2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km2: \n");
    scanf("%f", &areakm2_2);

    printf("Digite o PIB2: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos2: \n");
    scanf("%d", &numeropontosturisticos2);
    
    densidadepopulacional2 = (float)populacao2 / areakm2_2;
    PIBpercapta2 = (float)PIB2 / populacao2;

    // --- EXIBIÇÃO DAS CARTAS ---

    printf("\n===================================\n");
    printf("            CARTA 1: %s\n", nomedacidade1);
    printf("===================================\n");
    printf("1. População: %d\n", populacao1);
    printf("2. Área (km²): %.2f\n", areakm2_1);
    printf("3. PIB: %.2f\n", PIB1);
    printf("4. Pontos Turísticos: %d\n", numeropontosturisticos1);
    printf("5. Densidade Populacional: %.2f\n", densidadepopulacional1);
    printf("6. PIB per Capta: %.2f\n", PIBpercapta1);
    printf("Estado: %c | Código: %s\n", estado1, codigodacarta1);
    printf("===================================\n\n");

    printf("===================================\n");
    printf("            CARTA 2: %s\n", nomedacidade2);
    printf("===================================\n");
    printf("População: %d\n", populacao2);
    printf("Área (km²): %.2f\n", areakm2_2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", numeropontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
    printf("PIB per Capta: %.2f\n", PIBpercapta2);
    printf("Estado: %c | Código: %s\n", estado2, codigodacarta2);
    printf("===================================\n\n");

    return 0;
    
    }

    