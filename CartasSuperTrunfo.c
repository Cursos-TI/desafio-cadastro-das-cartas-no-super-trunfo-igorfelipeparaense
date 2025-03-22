#include <stdio.h>

int main() {
    // Dados para carta 01
    char estado1[50], codigoCarta1[50], nomeCidade1[50];
    int populacao1, numeroPontoTuristico1;
    float areaKM1, pib1;
    // Dados para carta 02
    char estado2[50], codigoCarta2[50], nomeCidade2[50];
    int populacao2, numeroPontoTuristico2;
    float areaKM2, pib2;
    // Solicitando dados para carta 01
    printf("Digite o nome do Estado (Carta 1): ");
    scanf("%s", estado1);

    printf("Digite o nome da Cidade (Carta 1): ");
    scanf("%s", nomeCidade1);

    printf("Digite o código da carta (Carta 1): ");
    scanf("%s", codigoCarta1);

    printf("Digite a população (Carta 1): ");
    scanf("%d", &populacao1);

    printf("Digite a área em km² (Carta 1): ");
    scanf("%f", &areaKM1);

    printf("Digite o PIB (Carta 1): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos (Carta 1): ");
    scanf("%d", &numeroPontoTuristico1);
    // Solicitando dados para carta 02
    printf("\nDigite o nome do Estado (Carta 2): ");
    scanf("%s", estado2);

    printf("Digite o nome da Cidade (Carta 2): ");
    scanf("%s", nomeCidade2);

    printf("Digite o código da carta (Carta 2): ");
    scanf("%s", codigoCarta2);

    printf("Digite a população (Carta 2): ");
    scanf("%d", &populacao2);

    printf("Digite a área em km² (Carta 2): ");
    scanf("%f", &areaKM2);

    printf("Digite o PIB (Carta 2): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos (Carta 2): ");
    scanf("%d", &numeroPontoTuristico2);

    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\nCidade: %s\nCódigo da Carta: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n", estado1, nomeCidade1, codigoCarta1, populacao1, areaKM1, pib1, numeroPontoTuristico1);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\nCidade: %s\nCódigo da Carta: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n", estado2, nomeCidade2, codigoCarta2, populacao2, areaKM2, pib2, numeroPontoTuristico2);

    return 0;
}