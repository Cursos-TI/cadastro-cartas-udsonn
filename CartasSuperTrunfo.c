#include <stdio.h>

 int main() {

     printf("Super Trunfo\n");

    // as variaveis da carta1

    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao = 2896697;
    float area = 5741.4;
    float pib = 127.5;
    int NPT = 12;

    // as variaveis da carta2

    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2 = 817511;
    float area2 = 2115.6;
    float pib2 = 43.8;
    int NPT2 = 10;

    // carta 1

printf("\nCarta 1\n");
    printf("Digite o nome do estado ");
        scanf("%s", estado);

    printf("codigo do estado ");
    scanf("%s", codigo);

    printf("cidade do estado ");
    scanf("%s", cidade);

    printf("qual a populacao do estado ");
    scanf("%d", &populacao);

    printf("qual a area do estado ");
    scanf("%f", &area);

    printf("qual o pib do estado ");
    scanf("%f", &pib);

    printf("qual o numero de pontos turisticos do estado ");
    scanf("%d", &NPT);

    // carta 2
    printf("\nCarta 2\n");
    printf("Digite o nome do estado ");
        scanf("%s", estado2);

    printf("codigo do estado ");
    scanf("%s", codigo2);

    printf("cidade do estado ");
    scanf("%s", cidade2);

    printf("qual a populacao do estado ");
    scanf("%d", &populacao2);
    printf("qual a area do estado ");
    scanf("%f", &area2);
    printf("qual o pib do estado ");
    scanf("%f", &pib2);
    printf("qual o numero de pontos turisticos do estado ");
    scanf("%d", &NPT2);

    //exibição da carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", NPT);

    //exibicao da carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", NPT2);
    


    return 0;

}