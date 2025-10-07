#include <stdio.h>

 int main() {

    
    // as variaveis da carta1

    char estado[20];
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    long int pib;
    int NPT;// numero de pontos turisticos
    float densidade;
    float ppc;
    int resultado;
    int escolha,escolha2,escolha3,escolha4;
    densidade = (float)populacao / area;
    ppc = (float)pib / populacao;

     
    // as variaveis da carta2

    char estado2[20];
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    long int pib2;
    int NPT2;// numero de pontos turisticos
    float densidade2;
    float ppc2;
    densidade2 = (float)populacao2 / area2;
    ppc2 = (float)pib2 / populacao2;
    int resultado2;
    

    // Menu do Jogo - Introdução / Boas vindas
    printf("**********************************\n");
    printf("* Bem vindo ao jogo Super Trunfo! *\n");
    printf("**********************************\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);
    printf("\n");

     switch (escolha){

            case 1:
        //Cadastro das cartas
        printf("### Cadastro das cartas ###\n");
        printf("\n");
     }
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
densidade = (float)populacao / area;
    ppc = (float)pib / populacao;
    float superpoder1 = populacao + area + pib + ppc + (1 / densidade) + NPT;
    
    printf("\n");
    printf("\n");

   
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
    printf("\n");

    //exibição da carta 1
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2li\n", pib);
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
    printf("PIB: %.2li\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", NPT2);
    printf("Densidade: %f\n", densidade2);
    printf("PIB per capita: %f\n", ppc2);
    printf("superpoderes: %.2f\n", superpoder2);
    printf("\n");


    // comparação da cartas

    printf("###comparando as cartas###\n");

    printf("escolha um atributo para comparar entre as cartas\n");
    printf("1 - populacao\n");
    printf("2 - area\n");
    printf("3 - pib\n");
    printf("4 - pib per capita\n");
    printf("5 - numero de pontos turisticos\n");
    printf("6 - superpoder\n");
    printf("digite o numero do atributo escolhido: ");
    scanf("%d", &escolha2);
    printf("voce escolheu o atributo %d\n", escolha2);
    printf("\n");

   switch (escolha2){

            case 1:
                printf("Você escolheu população!\n");

                printf("\n");

                printf("Carta 1 - %s, (%s) - População: %d\n", cidade, estado, populacao);
                printf("Carta 2 - %s, (%s) - População: %d\n", cidade2, estado2, populacao2);

                printf("\n");
                
                resultado = populacao > populacao2 ? 1 : 0;

                    if (populacao == populacao2) {
                        printf("O jogo empatou!!\n");
                    } else if (populacao > populacao2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;



            case 2:
                printf("Você escolheu área!\n");

                printf("\n");

                printf("Carta 1 - %s, (%s) - Area: %f Km²\n", cidade, estado, area);
                printf("Carta 2 - %s, (%s) - Area: %f Km²\n", cidade2, estado2, area2);

                printf("\n");

                resultado = area > area2 ? 1 : 0;

                    if (area == area2) {
                        printf("O jogo empatou!!\n");
                    } else if (area> area2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;

            case 3:
                printf("Você escolheu PIB!\n");

                printf("\n");

                printf("Carta 1 - %s, (%s) - PIB: %li\n", cidade, estado, pib);
                printf("Carta 2 - %s, (%s) - PIB: %li\n", cidade2, estado2, pib2);

                printf("\n");

                resultado = pib > pib2 ? 1 : 0;

                    if (pib == pib2) {
                        printf("O jogo empatou!!\n");
                    } else if (pib > pib2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;

            case 4:
                printf("Você escolheu pontos turísticos!\n");

                printf("\n");

                printf("Carta 1 - %s, (%s) - Pontos Turísticos: %d\n", cidade, estado, NPT);
                printf("Carta 2 - %s, (%s) - Pontos Turísticos: %d\n", cidade2, estado2, NPT2);

                printf("\n");

                resultado = NPT > NPT2 ? 1 : 0;

                    if (NPT == NPT2) {
                        printf("O jogo empatou!!\n");
                    } else if (NPT > NPT2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;

            case 5:
                printf("Você escolheu densidade demográfica!\n");

                printf("\n");
                
                printf("Carta 1 - %s, (%s) - Densidade Demográfica: %f\n", cidade, estado, densidade);
                printf("Carta 2 - %s, (%s) - Densidade Demográfica: %f\n", cidade2, estado2, densidade2);

                printf("\n");

                resultado = densidade < densidade2 ? 1 : 0;

                    if (densidade == densidade2) {
                        printf("O jogo empatou!!\n");
                    } else if (densidade < densidade2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;

            case 6:
                printf("Você escolheu PIB per capita!\n");

                printf("\n");

                printf("Carta 1 - %s, (%s) - PIB Per Capita: %li\n", cidade, estado, pib);
                printf("Carta 2 - %s, (%s) - PIB Per Capita: %li\n", cidade2, estado2, pib2);

                printf("\n");

                resultado = pib > pib2 ? 1 : 0;

                    if (pib == pib2) {
                        printf("O jogo empatou!!\n");
                    } else if (pib > pib2) {
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                    } else{
                        printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                    } break;

                    default:
                printf("Opção invalida.\n");

                printf("\n");
            break;

        } 
        
        printf("\n");
        printf("\n");
        printf("\n");
            //Comparação do segundo atributo

            printf("Escolha o segundo atributo a ser comparado, não pode ser o mesmo do primeiro:\n");
            printf("\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Pontos Turísticos\n");
            printf("5. Densidade demográfica\n");
            printf("6. PIB Per Capita\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &escolha3);
            printf("\n");

            if (escolha2 == escolha3) {
                printf("Você escolheu o mesmo atributo, opção invalida!!");
                printf("\n");
            } else {
                 switch (escolha3){
        
                        case 1:
                            printf("Você escolheu população!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - População: %d\n", cidade, estado, populacao);
                            printf("Carta 2 - %s, (%s) - População: %d\n", cidade2, estado2, populacao2);

                            printf("\n");
                    
                            resultado2 = populacao > populacao2 ? 1 : 0;
        
                                if (populacao == populacao2) {
                                    printf("O jogo empatou!!\n");
                                } else if (populacao > populacao2) {
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                                } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
        
        
                        case 2:
                            printf("Você escolheu área!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - Area: %f Km²\n", cidade, estado, area);
                            printf("Carta 2 - %s, (%s) - Area: %f Km²\n", cidade2, estado2, area2);

                            printf("\n");
        
                            resultado2 = area > area2 ? 1 : 0;
        
                                if (area == area2) {
                                    printf("O jogo empatou!!\n");
                                } else if (area > area2) {
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                                } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
                        case 3:
                            printf("Você escolheu PIB!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - PIB: %li\n", cidade, estado, pib);
                            printf("Carta 2 - %s, (%s) - PIB: %li\n", cidade2, estado2, pib2);

                            printf("\n");
        
                            resultado2 = pib > pib2 ? 1 : 0;
        
                                if (pib == pib2) {
                                    printf("O jogo empatou!!\n");
                                } else if (pib > pib2) {
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                                } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
                        case 4:
                            printf("Você escolheu pontos turísticos!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - Pontos Turísticos: %d\n", cidade, estado, NPT);
                            printf("Carta 2 - %s, (%s) - Pontos Turísticos: %d\n", cidade2, estado2, NPT2);

                            printf("\n");
        
                            resultado2 = NPT > NPT2 ? 1 : 0;
        
                                if (NPT == NPT2) {
                                    printf("O jogo empatou!!\n");
                                } else if (NPT > NPT2) {
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                                    } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
                        case 5:
                            printf("Você escolheu densidade demográfica!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - Densidade Demográfica: %f\n", cidade, estado, densidade);
                            printf("Carta 2 - %s, (%s) - Densidade Demográfica: %f\n", cidade2, estado2, densidade2);

                            printf("\n");
        
                            resultado2 = densidade < densidade2 ? 1 : 0;
        
                                if (densidade == densidade2) {
                                    printf("O jogo empatou!!\n");
                                } else if (densidade < densidade2) {
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                                } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
                        case 6:
                            printf("Você escolheu PIB per capita!\n");

                            printf("\n");

                            printf("Carta 1 - %s, (%s) - PIB Per Capita: %li\n", cidade, estado, pib);
                            printf("Carta 2 - %s, (%s) - PIB Per Capita: %li\n", cidade2, estado2, pib2);

                            printf("\n");
        
                            resultado2 = pib > pib2 ? 1 : 0;
        
                                if (pib == pib2) {
                                    printf("O jogo empatou!!\n");
                                } else if (pib > pib2) {
                                printf("A Carta 1 %s, (%s), é vencedora!\n", cidade, estado);
                                } else{
                                    printf("A Carta 1 %s, (%s), é vencedora!\n", cidade2, estado2);
                                } break;
        
                        default:
                            printf("Opção invalida.\n");

                            printf("\n");
                        break;
             
            }
            printf("\n");
            printf("\n");
            printf("\n");

            //Apresentação dos resultados
            printf("### Resultado do Jogo: ###\n");
            printf("\n");
            if (resultado && resultado2) {
                printf("A Carta 1 - %s, (%s), ganhou a partida!\n", cidade, estado);
            } else if (resultado != resultado2) {
                printf("O jogo empatou!!\n");
            } else {
                printf("A Carta 2 - %s, (%s), ganhou a partida!\n", cidade2, estado2);
            }
        
switch (escolha4){

        //Regras
    case 2:
        printf("Super Trunfo: Cidades - Regras\n");
        printf("1. Cada jogador cadastra uma cidade com os seguintes atributos:\n");
        printf("   - Código, Estado, Nome, População, Área, PIB, Pontos Turísticos.\n");
        printf("2. O jogo calcula automaticamente:\n");
        printf("   - Densidade Demográfica\n");
        printf("   - PIB per Capita.\n");
        printf("3. O jogador escolhe um atributo para competir:\n");
        printf("   - População (vence o maior).\n");
        printf("   - Área (vence o maior).\n");
        printf("   - PIB (vence o maior).\n");
        printf("   - Pontos Turísticos (vence o maior).\n");
        printf("   - Densidade Demográfica (vence o menor).\n");
        printf("   - PIB Per Capita (vence o maior).\n");
        printf("4. As cidades são comparadas e o jogo anuncia a vencedora.\n");
        printf("5. Em caso de empate, ninguém vence.\n");
        printf("Objetivo: Escolher os melhores atributos e vencer as comparações!\n");
            break;
        
    case 3:
        printf ("Saindo do jogo.\n");
        break;
    
    default:
        printf("Opcao invalida.\n");
        break;
}
            }
    




    return 0;

        }