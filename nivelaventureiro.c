#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Váriaveis carta 1
  char estado1;
  char codigo1 [5];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;
  float densidade1;
  float pibpercapita1;

  //entrada da carta 1
  printf ("CADASTRO DA CARTA 1\n");

  printf ("Estado (A-H): ");
  scanf (" %c", &estado1);

  printf("Cóigo da carta (ex: A01): ");
  scanf("%4s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área (em km²): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Número de pontos Turísticos: ");
  scanf("%d", &pontos1);

  // cálculos da carta 1
  densidade1 = populacao1 / area1;
  pibpercapita1 = pib1 / populacao1;

  //exibição dos dados carta 1
  printf("\n--- CARTA 1 ---\n");
  printf("Estado: %c\n ",  estado1);
  printf("Código: %s\n ", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n ", populacao1);
  printf("Área: %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos1 );
  printf("Densidade: %.2f\n", densidade1);
  printf("Pib-per-capita: %.2f\n", pibpercapita1);


  // Váriaveis carta 2
  char estado2;
  char codigo2 [5];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidade2;
  float pibpercapita2;

  printf("CADASTRO DA CARTA 2\n ");

  printf("Estado (A-H): ");
  scanf(" %c", &estado2);

  printf("Códiogo da carta (ex: A01): ");
  scanf("%4s", codigo2);

  printf("Nome da cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área (em km²) ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Pontos turísticos: ");
  scanf("%d", &pontos2);

  //cálculos da carta 2
  densidade2 = populacao2 / area2;
  pibpercapita2 = pib2 / populacao2;

  //exibição dos dados carta 2
  printf("\n--- CARTA 2 ---\n");
  printf("Estado: %c\n ", estado2);
  printf("Código: %s\n ", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos2);
  printf("Densidade: %.2f\n", densidade2);
  printf("Pib-per-capita: %.2f\n", pibpercapita2);

return 0;
} 