#include <stdio.h>

int main() {
 
    // Super Trunfo //

    // --- Variáveis para CARTA 1 --- //
 
    char estado1;
    char codigo_da_carta1[30];
    char nome_da_cidade1[30];
    unsigned long int populacao1;
    int numero_pontos_turisticos1;
    float area_km2_1;
    float pib1;
    float densidade_populacional1; 
    float pib_per_capta1;
    float super_poder1; 

    // --- Variáveis para CARTA 2 --- //
    
    char estado2;
    char codigo_da_carta2[30];
    char nome_da_cidade2[30];
    unsigned long int populacao2;
    int numero_pontos_turisticos2;
    float area_km2_2;
    float pib2;
    float densidade_populacional2;
    float pib_per_capta2;
    float super_poder2; 
    
    // CARTA 1

    printf("--- DADOS DA CARTA 1 ---\n");

    printf("Estado (1 caractere): ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf(" %s", codigo_da_carta1); 
  
    printf("Nome da cidade: ");
    scanf(" %s", nome_da_cidade1); 

    printf("População: ");
    scanf(" %lu", &populacao1); 

    printf("Área km2: ");
    scanf(" %f", &area_km2_1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &numero_pontos_turisticos1); 

    // *** Cálculos Automáticos CARTA 1 *** //
    densidade_populacional1 = (float)populacao1 / area_km2_1;
    pib_per_capta1 = pib1 / (float)populacao1;
    
    // CARTA 2

    printf("\n--- DADOS DA CARTA 2 ---\n");

    printf("Estado (1 caractere): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf(" %s", codigo_da_carta2);

    printf("Nome da cidade: ");
    scanf(" %s", nome_da_cidade2);

    printf("População: ");
    scanf(" %lu", &populacao2);

    printf("Área km2: ");
    scanf(" %f", &area_km2_2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &numero_pontos_turisticos2);

    // *** Cálculos Automáticos CARTA 2 *** //
    densidade_populacional2 = (float)populacao2 / area_km2_2;
    pib_per_capta2 = pib2 / (float)populacao2; 


    // 1. CALCULAR O SUPER PODER 
    // SP = Pop + Área + PIB + PT + PIB/hab + (1 / Densidade)

    // Cálculo CARTA 1
    super_poder1 = (float)populacao1 + area_km2_1 + pib1 + (float)numero_pontos_turisticos1 + pib_per_capta1 + (1.0f / densidade_populacional1);

    // Cálculo CARTA 2
    super_poder2 = (float)populacao2 + area_km2_2 + pib2 + (float)numero_pontos_turisticos2 + pib_per_capta2 + (1.0f / densidade_populacional2);

    // --- Exibição das Cartas e Super Poderes --- //

    printf("\n===== CARTA 1 (Super Poder: %.2f) =====\n", super_poder1);
    printf("Cidade: %s (%c)\n", nome_da_cidade1, estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area_km2_1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per capita: %.2f\n", pib_per_capta1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("Pontos Turísticos: %d\n", numero_pontos_turisticos1);

    printf("\n===== CARTA 2 (Super Poder: %.2f) =====\n", super_poder2);
    printf("Cidade: %s (%c)\n", nome_da_cidade2, estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area_km2_2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f\n", pib_per_capta2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("Pontos Turísticos: %d\n", numero_pontos_turisticos2);

    // Comparações de Cartas Atributo População //

    if(populacao1 > populacao2){
        printf("Carta 1 venceu!\n");
    }else{
        printf("Carta 2, venceu!\n");
    }

    return 0;
    
}