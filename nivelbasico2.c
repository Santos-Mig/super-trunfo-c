#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, pibpercapita1;

    printf("\n--- CADASTRO DA CARTA 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%4s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos carta 1
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

    // Exibição carta 1
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercapita1);

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, pibpercapita2;

    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: A01): ");
    scanf("%4s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos carta 2
    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // Exibição carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercapita2);

    // ===== SUPER PODER =====
    float super1 = (float)populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1 / densidade1);
    float super2 = (float)populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1 / densidade2);

    // ===== COMPARAÇÃO GERAL =====
    printf("\n--- COMPARACAO GERAL ---\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

    // Regra invertida
    printf("Densidade populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    // ===== COMPARAÇÃO DETALHADA =====
    printf("\n--- COMPARACAO DETALHADA ---\n");

    int escolha = 1; // 1=População, 2=Área, 3=PIB, 4=Densidade, 5=PIB per capita

    if (escolha == 1){
        printf("Comparacao de cartas (Atributo: Populacao)\n");
        printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
        printf("Carta 2 - %s: %lu\n", cidade2, populacao2);

        if (populacao1 > populacao2)
            printf("Resultado: Carta 1 venceu!\n");
        else 
            printf("Resultado: Carta 2 venceu!\n");
    }
    
    else if (escolha == 2){
        printf("Comparacao de cartas (Atributo: Area)\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, area1);
        printf("Carta 2 - %s: %.2f\n", cidade2, area2);

        if (area1 > area2) 
            printf("Resultado: Carta 1 venceu!\n");
        else
            printf("Resultado: Carta 2 venceu!\n");
    }

    else if (escolha == 3){
        printf("Comparacao de cartas (Atributo: PIB)\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, pib1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pib2);

        if (pib1 > pib2)
            printf("Resultado: Carta 1 venceu!\n");
        else 
            printf("Resultado: Carta 2 venceu!\n");
    }
    
    else if (escolha == 4){
        printf("Comparacao de cartas (Atributo: Densidade)\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, densidade1);
        printf("Carta 2 - %s: %.2f\n", cidade2, densidade2);

        if (densidade1 < densidade2) // regra correta
            printf("Resultado: Carta 1 venceu!\n");
        else
            printf("Resultado: Carta 2 venceu!\n");
    }

    else if (escolha == 5){
        printf("Comparacao de cartas (Atributo: PIB per Capita)\n");
        printf("Carta 1 - %s: %.2f\n", cidade1, pibpercapita1);
        printf("Carta 2 - %s: %.2f\n", cidade2, pibpercapita2);

        if (pibpercapita1 > pibpercapita2)
            printf("Resultado: Carta 1 venceu!\n");
        else
            printf("Resultado: Carta 2 venceu!\n");
    }

    return 0;
}