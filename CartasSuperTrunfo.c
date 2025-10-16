#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Aventureiro – Cálculo de Densidade Populacional e PIB per Capita
// Observações: Prática de Operadores Matemáticos, Manipulação e Conversão de Tipos
// Área em km2
// PIB em bilhões de reais (convertido para reais ao calcular PIB per capita)
// Autor: Anariza C. S. Resende | Matrícula: 202509278794 | Data: 16/10/2025

int main() {
    // ===== Declarações Carta 1 =====
    char  estado1;            // letra A-H do Estado
    char  codigo1[5];         // ex.: "A01"
    char  nomeCidade1[50];    // nome com espaços
    float populacao1;         // habitantes
    float area1;              // km2
    float pib1;               // bilhões de reais
    int   pontosTuristicos1;  // quantidade

    // Propriedades calculadas (Carta 1)
    float densidade1;         // habitantes/km2
    float pibPerCapita1;      // reais por habitante

    // ===== Declarações Carta 2 =====
    char  estado2;
    char  codigo2[5];
    char  nomeCidade2[50];
    float populacao2;
    float area2;
    float pib2;
    int   pontosTuristicos2;

    // Propriedades calculadas (Carta 2)
    float densidade2;
    float pibPerCapita2;

    // ===== Entrada de dados Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%4s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a populacao: ");
    scanf(" %f", &populacao1);
    printf("Digite a area (em km2): ");
    scanf(" %f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf(" %f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== Entrada de dados Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: B01): ");
    scanf("%4s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a populacao: ");
    scanf(" %f", &populacao2);
    printf("Digite a area (em km2): ");
    scanf(" %f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Calculos =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // PIB per capita = (PIB em reais) / população  (bilhões -> reais)
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // ===== Saida de Dados =====
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %.2f\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %.2f\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}

