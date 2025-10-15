#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: Criar duas cartas lendo dados do usuário e exibindo formatado
// Autor: Anariza C. S. Resende | Matrícula: 202509278794 | Data: 14/10/2025

int main() {
    // ===== Declarações Carta 1 =====
    char estado1;              // letra A-H do estado
    char codigo1[5];           // ex.: "A01" (+ '\0')
    char nomeCidade1[50];      // nome com espaços
    int  populacao1;           // habitantes
    float area1;               // km²
    float pib1;                // bilhões de reais
    int  pontosTuristicos1;    // quantidade

    // ===== Declarações Carta 2 =====
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int  populacao2;
    float area2;
    float pib2;
    int  pontosTuristicos2;

    // ===== Entrada de dados Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);                // espaço antes de %c consome newline pendente
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%4s", codigo1);                 // limite de leitura para evitar overflow
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);         // lê até Enter (com espaços)
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
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
    scanf("%d", &populacao2);
    printf("Digite a area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Saída =====
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\nCodigo: %s\nNome da Cidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("Populacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\n", populacao1, area1, pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\nCodigo: %s\nNome da Cidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("Populacao: %d\nArea: %.2f km2\nPIB: %.2f bilhoes de reais\n", populacao2, area2, pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
