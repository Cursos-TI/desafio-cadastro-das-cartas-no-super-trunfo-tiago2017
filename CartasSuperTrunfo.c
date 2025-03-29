

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


#include <stdio.h>

int main() {
    // Nível Novato e Aventureiro
    char estado1[3], codigo1[4], cidade1[20];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;

    char estado2[3], codigo2[4], cidade2[20];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    // Cabeçalho
    printf("Desafio Super Trunfo - Países - Cadastro das Cartas\n");
    printf("Bem-vindo ao desafio 'Super Trunfo - Países'!\n");
    printf("Insira os dados das cartas a seguir:\n\n");

    // Cadastro da Carta 1
    printf("Carta 1:\n");
    printf("Estado (ex: A): ");
    scanf("%s", estado1);
    printf("Código (ex: 01): ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (R$ bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    printf("\n"); // Quebra de linha para separar as cartas

    // Cadastro da Carta 2
    printf("Carta 2:\n");
    printf("Estado (ex: B): ");
    scanf("%s", estado2);
    printf("Código (ex: 02): ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (R$ bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos Dados Cadastrados
    printf("\nDados das Cartas Cadastradas:\n\n");

    printf("Carta 1: %s%s - %s\n", estado1, codigo1, cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n\n", pibPerCapita1);

    printf("Carta 2: %s%s - %s\n", estado2, codigo2, cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}