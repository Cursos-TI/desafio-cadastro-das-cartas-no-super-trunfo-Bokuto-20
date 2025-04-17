#include <stdio.h>

struct carta {
    char estado; // Letra de A a H.
    char código[4]; // Será o Código da Carta Ex: (A04 || B03).
    char cidade[50]; // Nome da Cidade.
    unsigned long int população; // Número de Habitantes (agora unsigned long int).
    int pontosTurísticos; // Quantidade de Pontos Turísticos na Cidade.
    float Área; // Área da Cidade em (KM²).
    float PIB; // Produto Interno Bruto da Cidade.
    float pibPerCapita; // PIB per Capita
    float densidadePopulacional; // Densidade Populacional
    float superPoder; // Super Poder da carta
};

int main(void) {
    struct carta carta1, carta2;

    // Definindo os Dados da Carta Número 1.
    printf("Escreva os Dados da carta Número 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código 01-04 (ex:A01): ");
    scanf("%s", carta1.código);

    printf("Escreva o Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("Numero de Habitantes da Cidade: ");
    scanf(" %lu", &carta1.população); // Mudado para unsigned long int

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTurísticos);

    printf("Área da Cidade em (km²): ");
    scanf("%f", &carta1.Área);

    printf("PIB (Produto Interno Bruto): ");
    scanf("%f", &carta1.PIB);

    // Calcular PIB per Capita e Densidade Populacional para carta1
    carta1.pibPerCapita = carta1.PIB / carta1.população;
    carta1.densidadePopulacional = carta1.população / carta1.Área;
    carta1.superPoder = (float)carta1.população + carta1.Área + carta1.PIB + carta1.pontosTurísticos + carta1.pibPerCapita + (1 / carta1.densidadePopulacional);

    // Definindo os Dados da Carta Número 2.
    printf("\nEscreva os Dados da carta Número 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código (ex:A01): ");
    scanf("%s", carta2.código);

    printf("Escreva o Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Numero de Habitantes da Cidade: ");
    scanf(" %lu", &carta2.população); // Mudado para unsigned long int

    printf("Quantidade de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTurísticos);

    printf("Área da Cidade em (km²): ");
    scanf("%f", &carta2.Área);

    printf("PIB (Produto Interno Bruto): ");
    scanf("%f", &carta2.PIB);

    // Calcular PIB per Capita e Densidade Populacional para carta2
    carta2.pibPerCapita = carta2.PIB / carta2.população;
    carta2.densidadePopulacional = carta2.população / carta2.Área;
    carta2.superPoder = (float)carta2.população + carta2.Área + carta2.PIB + carta2.pontosTurísticos + carta2.pibPerCapita + (1 / carta2.densidadePopulacional);

    // Comparações de Atributos:
    printf("\nComparação de Cartas:\n");

    // População
    printf("População: Carta 1 venceu (%d)\n", carta1.população > carta2.população);

    // Área
    printf("Área: Carta 1 venceu (%d)\n", carta1.Área > carta2.Área);

    // PIB
    printf("PIB: Carta 1 venceu (%d)\n", carta1.PIB > carta2.PIB);

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontosTurísticos > carta2.pontosTurísticos);

    // Densidade Populacional (menor densidade vence)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidadePopulacional < carta2.densidadePopulacional);

    // PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pibPerCapita > carta2.pibPerCapita);

    // Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.superPoder > carta2.superPoder);

    return 0;
}