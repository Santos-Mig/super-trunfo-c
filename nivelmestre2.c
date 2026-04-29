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

    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;

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

    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // ===== MENU DOIS ATRIBUTOS =====
    int att1, att2;

    printf("\n--- ESCOLHA O PRIMEIRO ATRIBUTO ---\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opcao: ");
    scanf("%d", &att1);

    printf("\n--- ESCOLHA O SEGUNDO ATRIBUTO ---\n");

    if (att1 != 1) printf("1 - População\n");
    if (att1 != 2) printf("2 - Area\n");
    if (att1 != 3) printf("3 - PIB\n");
    if (att1 != 4) printf("4 - Pontos Turísticos\n");
    if (att1 != 5) printf("5 - Densidade demográfica\n");

    printf("Opcao: ");
    scanf("%d", &att2);

    if (att1 == att2) {
        printf("Erro: atributos iguais!\n");
        return 0;
    }

    float v1_c1, v1_c2, v2_c1, v2_c2;

    // atributo 1
    switch(att1) {
        case 1: v1_c1 = populacao1; v1_c2 = populacao2; break;
        case 2: v1_c1 = area1; v1_c2 = area2; break;
        case 3: v1_c1 = pib1; v1_c2 = pib2; break;
        case 4: v1_c1 = pontos1; v1_c2 = pontos2; break;
        case 5: v1_c1 = densidade1; v1_c2 = densidade2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // atributo 2
    switch(att2) {
        case 1: v2_c1 = populacao1; v2_c2 = populacao2; break;
        case 2: v2_c1 = area1; v2_c2 = area2; break;
        case 3: v2_c1 = pib1; v2_c2 = pib2; break;
        case 4: v2_c1 = pontos1; v2_c2 = pontos2; break;
        case 5: v2_c1 = densidade1; v2_c2 = densidade2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // ===== COMPARAÇÃO (TERNÁRIO) =====
    int res1 = (att1 == 5) ? (v1_c1 < v1_c2) : (v1_c1 > v1_c2);
    int res2 = (att2 == 5) ? (v2_c1 < v2_c2) : (v2_c1 > v2_c2);

    // ===== SOMA =====
    float soma1 = v1_c1 + v2_c1;
    float soma2 = v1_c2 + v2_c2;

    // ===== RESULTADO =====
    printf("\n--- RESULTADO FINAL ---\n");

    printf("%s vs %s\n\n", cidade1, cidade2);

    printf("Atributo 1: Carta1=%.2f | Carta2=%.2f\n", v1_c1, v1_c2);
    printf("Atributo 2: Carta1=%.2f | Carta2=%.2f\n", v2_c1, v2_c2);

    printf("\nSoma Carta 1: %.2f\n", soma1);
    printf("Soma Carta 2: %.2f\n", soma2);

    if (soma1 > soma2)
        printf("\nVencedor: Carta 1 (%s)\n", cidade1);
    else if (soma2 > soma1)
        printf("\nVencedor: Carta 2 (%s)\n", cidade2);
    else
        printf("\nEmpate!\n");

    return 0;
}