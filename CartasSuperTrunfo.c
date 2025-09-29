#include <stdio.h>

 int main() {

     printf("Super Trunfo\n");

    // as variaveis da carta1

    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    long int pib;
    int NPT;
    float densidade;
    float ppc;
    int resultado;

    // as variaveis da carta2

    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    long int pib2;
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
    scanf("%ld", &pib);

    printf("qual o numero de pontos turisticos do estado ");
    scanf("%d", &NPT);

    printf("\n");

    densidade = (float)populacao / area;
    ppc = (float)pib / populacao;

     float superpoder1 = populacao + area + pib + ppc + (1 / densidade) + NPT;
    
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
    scanf("%ld", &pib2);
    printf("qual o numero de pontos turisticos do estado ");
    scanf("%d", &NPT2);
    
    densidade2 = (float)populacao2 / area2;
    ppc2 = (float)pib2 / populacao2;

    float superpoder2 = populacao2 + area2 + pib2 + ppc2 + (1 / densidade2) + NPT2;
    
    //exibição da carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2ld\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", NPT);
    printf("Densidade: %f\n", densidade);
    printf("PIB per capita: %f\n", ppc);
    printf("superpoderes: %.2f\n", superpoder1);
    //exibicao da carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2ld\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", NPT2);
    printf("Densidade: %f\n", densidade2);
    printf("PIB per capita: %f\n", ppc2);
    printf("superpoderes: %.2f\n", superpoder2);
    
    // comparação da cartas

printf("\nComparacao entre as cartas\n");
printf(" a populacao da carta 1 e %d e a da carta 2 e %d\n", populacao, populacao2);
resultado = populacao > populacao2;
printf("o resultado da comparacao e %d (1 se a carta 1 for maior, 0 se a carta 2 for maior)\n", resultado);
printf(" a area da carta 1 e %.2f e a da carta 2 e %.2f\n", area, area2);
resultado = area > area2;
printf("o resultado da comparacao e %d (1 se a carta 1 for maior, 0 se a carta 2 for maior)\n", resultado);
printf(" o pib da carta 1 e %.2ld e o da carta 2 e %.2ld\n", pib, pib2);
resultado = pib > pib2;
printf("o resultado da comparacao e %d (1 se a carta 1 for maior, 0 se a carta 2 for maior)\n",resultado);
printf(" o pib per capita da carta 1 e %.2f e o da carta 2 e %.2f\n", ppc, ppc2);
resultado = ppc > ppc2;
printf("o resultado da comparacao e %d (1 se a carta 1 for maior, 0 se a carta 2 for maior)\n", resultado);
printf(" a densidade populacional da carta 1 e %.2f e a da carta 2 e %.2f\n", densidade, densidade2);
resultado = densidade < densidade2;
printf("o resultado da comparacao e %d (1 se a carta 1 for maior, 0 se a carta 2 for maior)\n", resultado);
printf(" o numero de pontos turisticos da carta 1 e %d e o da carta 2 e %d\n", NPT, NPT2);
resultado = NPT > NPT2;
printf("o resultado da comparacao e %d (1 se a carta 1 for maior, 0 se a carta 2 for maior)\n", resultado); 
printf(" o super poder da carta 1 e %.2f e o da carta 2 e %.2f\n", superpoder1, superpoder2);
resultado = superpoder1 > superpoder2;
printf("o resultado da comparacao e %d (1 se a carta 1 for maior, 0 se a carta 2 for maior)\n", resultado);




    return 0;

}
