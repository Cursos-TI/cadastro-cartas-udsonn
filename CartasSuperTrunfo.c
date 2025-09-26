#include <stdio.h>

 int main() {

     printf("Super Trunfo\n");

    // as variaveis da carta1

    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int NPT;
    float densidade;
    float ppc;

    // as variaveis da carta2

    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int NPT2;
    float densidade2;
    float ppc2;

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

    densidade = (float)populacao / area;
    ppc = (float)pib / populacao;

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
    
    densidade2 = (float)populacao2 / area2;
    ppc2 = (float)pib2 / populacao2;

    //exibição da carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", NPT);
    printf("Densidade: %f\n", densidade);
    printf("PIB per capita: %f\n", ppc);

    //exibicao da carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", NPT2);
    printf("Densidade: %f\n", densidade2);
    printf("PIB per capita: %f\n", ppc2);
    
    


    return 0;

}
