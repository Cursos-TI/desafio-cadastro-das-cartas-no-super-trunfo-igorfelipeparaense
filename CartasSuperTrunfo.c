#include <stdio.h>

int main() {
    char estado1[50], codigocarta1[50], nomedacidade1[50];
    int populacao1, numeropontosturistico1;
    float areaemkm1, pib1;

    char estado2[50], codigocarta2[50], nomedacidade2[50];
    int populacao2, numeropontosturistico2;
    float areaemkm2, pib2;

    printf("Digite o nome do Estado (Carta 1): ");
    scanf("%s", estado1);

    printf("Digite o nome da Cidade (Carta 1): ");
    scanf("%s", nomedacidade1);

    printf("Digite o código da carta (Carta 1): ");
    scanf("%s", codigocarta1);

    printf("Digite a população (Carta 1): ");
    scanf("%d", &populacao1);

    printf("Digite a área em km² (Carta 1): ");
    scanf("%f", &areaemkm1);

    printf("Digite o PIB (Carta 1): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos (Carta 1): ");
    scanf("%d", &numeropontosturistico1);

    printf("\nDigite o nome do Estado (Carta 2): ");
    scanf("%s", estado2);

    printf("Digite o nome da Cidade (Carta 2): ");
    scanf("%s", nomedacidade2);

    printf("Digite o código da carta (Carta 2): ");
    scanf("%s", codigocarta2);

    printf("Digite a população (Carta 2): ");
    scanf("%d", &populacao2);

    printf("Digite a área em km² (Carta 2): ");
    scanf("%f", &areaemkm2);

    printf("Digite o PIB (Carta 2): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos (Carta 2): ");
    scanf("%d", &numeropontosturistico2);

    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\nCidade: %s\nCódigo da Carta: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n", estado1, nomedacidade1, codigocarta1, populacao1, areaemkm1, pib1, numeropontosturistico1);

    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\nCidade: %s\nCódigo da Carta: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n", estado2, nomedacidade2, codigocarta2, populacao2, areaemkm2, pib2, numeropontosturistico2);

    return 0;
}