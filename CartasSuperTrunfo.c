#include <stdio.h>

struct carta {
    //Estrutura das Cartas. 
    char estado; // Letra de A a H.
    char código[4]; // Será o Código da Carta Ex: (A04 || B03).
    char cidade[50]; // Nome da Cidade.
    int população; // Número de Habitantes.
    int pontosTurísticos; // Quantidade de Pontos Turísticos na Cidade.
    float Área; // Área da Cidade em (KM²).
    float PIB; // Produto Interno Bruto da Cidade.
};

int main(void){
   struct carta carta1, carta2;

   //Definindo os Dados da Carta Número1.
   printf("Escreva os Dados da carta Número 1:\n");
   printf("Estado (A-H): ");
   scanf(" %c", &carta1.estado);

   printf("Código 01-04 (ex:A01): ");
   scanf("%s", carta1.código);

   printf("Escreva o Nome da Cidade: ");
   scanf(" %[^\n]", carta1.cidade);

   printf("Numero de Habitantes da Cidade: ");
   scanf(" %d", &carta1.população);

   printf("Quantidade de Pontos Turísticos: ");
   scanf("%d", &carta1.pontosTurísticos);

   printf("Área da Cidade em (km²): ");
   scanf("%f", &carta1.Área);

   printf("PIB (Produto Interno Bruto): ");
   scanf("%f", &carta1.PIB);

   //Definindo os Dados da Carta Número2.
   printf("\nEscreva os Dados da carta Número 2:\n");
   printf("Estado (A-H): ");
   scanf(" %c", &carta2.estado);

   printf("Código (ex:A01): ");
   scanf("%s", carta2.código);

   printf("Escreva o Nome da Cidade: ");
   scanf(" %[^\n]", carta2.cidade);

   printf("Numero de Habitantes da Cidade: ");
   scanf(" %d", &carta2.população);

   printf("Quantidade de Pontos Turísticos: ");
   scanf("%d", &carta2.pontosTurísticos);

   printf("Área da Cidade em (km²): ");
   scanf("%f", &carta2.Área);

   printf("PIB (Produto Interno Bruto): ");
   scanf("%f", &carta2.PIB);

   //Dados da Carta1.
    printf("\ncarta 1\n");
    printf("Estado:%c\n", carta1.estado);
    printf("Código:%s\n", carta1.código);
    printf("Nome da Cidade:%s\n", carta1.cidade);
    printf("População:%d\n", carta1.população);
    printf("Número de Pontos Turísticos:%d\n", carta1.pontosTurísticos);
    printf("Área:%.2f km²\n", carta1.Área);
    printf("PIB:%.2f bilhões de reais\n", carta1.PIB);

    //Dados da Carta2.
    printf("\ncarta 2\n");
    printf("Estado:%c\n", carta2.estado);
    printf("Código:%s\n", carta2.código);
    printf("Nome da Cidade:%s\n", carta2.cidade);
    printf("População:%d\n", carta2.população);
    printf("Número de Pontos Turísticos:%d\n", carta2.pontosTurísticos);
    printf("Área:%.2f km²\n", carta2.Área);
    printf("PIB:%.2f bilhões de reais\n", carta2.PIB);
}
