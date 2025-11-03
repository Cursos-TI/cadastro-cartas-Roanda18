#include <stdio.h>

int main()
{
    /* printf("Cadastro de cartas do Super Trunfo\n");
     printf("Digite os dados da primeira carta:\n");
     printf("Digite o Estado da carta: ");
     char estado[50];
     scanf("%s", estado);
     printf("Digite o Codigo da carta: ");
     int codigo;
     scanf("%d", &codigo);
     printf("Digite o nome da cidade da carta: ");
     char cidade[50];
     scanf("%s", cidade);
     printf("Digite a população da carta: ");
     unsigned long int populacao;
     scanf("%lu", &populacao);
     printf("Digite a area da carta: ");
     float area;
     scanf("%f", &area);
     printf("Digite o PIB da carta: ");
     float pib;
     scanf("%f", &pib);
     printf("Digite o numero de pontos turisticos da carta: ");
     int pontosTuristicos;
     scanf("%d", &pontosTuristicos);
     float densidadePopulacional = (float)populacao / area;
     float indicePibPerCapita = (float)pib / populacao;
     float superPoder = (float)populacao + area + pib + pontosTuristicos + densidadePopulacional + indicePibPerCapita;
     printf("Cadastro da primeira carta concluido com sucesso!\n");
     printf("Carta 1 \n");
     printf("Estado: %s\n", estado);
     printf("Codigo: %d\n", codigo);
     printf("Cidade: %s\n", cidade);
     printf("População: %lu\n", populacao);
     printf("Area: %.2f\n", area);
     printf("PIB: %.2f\n", pib);
     printf("Pontos Turisticos: %d\n", pontosTuristicos);
     printf("Densidade Populacional: %.2f\n", densidadePopulacional);
     printf("Indice PIB per Capita: %.2f\n", indicePibPerCapita);
     printf("Digite os dados da segunda carta:\n");
     printf("Digite o Estado da carta: ");
     char estado2[50];
     scanf("%s", estado2);
     printf("Digite o Codigo da carta: ");
     int codigo2;
     scanf("%d", &codigo2);
     printf("Digite o nome da cidade da carta: ");
     char cidade2[50];
     scanf("%s", cidade2);
     printf("Digite a população da carta: ");
     unsigned long int populacao2;
     scanf("%lu", &populacao2);
     printf("Digite a area da carta: ");
     float area2;
     scanf("%f", &area2);
     printf("Digite o PIB da carta: ");
     float pib2;
     scanf("%f", &pib2);
     printf("Digite o numero de pontos turisticos da carta: ");
     int pontosTuristicos2;
     scanf("%d", &pontosTuristicos2);
     float densidadePopulacional2 = (float)populacao2 / area2;
     float indicePibPerCapita2 = (float)pib2 / populacao2;
     float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + indicePibPerCapita2;
     printf("Cadastro da segunda carta concluido com sucesso!\n");
     printf("Carta 2 \n");
     printf("Estado: %s\n", estado2);
     printf("Codigo: %d\n", codigo2);
     printf("Cidade: %s\n", cidade2);
     printf("População: %lu\n", populacao2);
     printf("Area: %.2f\n", area2);
     printf("PIB: %.2f\n", pib2);
     printf("Pontos Turisticos: %d\n", pontosTuristicos2);
     printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
     printf("Indice PIB per Capita: %.2f\n", indicePibPerCapita2);


     printf("***************************************************\n");
     printf("Comparação de Cartas:\n");
     printf("Comparação de população entre as cartas:\n");
     printf("Carta 1: %lu\n", populacao > populacao2);
     printf("Comparação de área entre as cartas:\n");
     printf("Carta 1: %lu\n", area > area2);
     printf("Comparação de PIB entre as cartas:\n");
     printf("Carta 1: %lu\n", pib > pib2);
     printf("Comparação de pontos turísticos entre as cartas:\n");
     printf("Carta 1: %lu\n", pontosTuristicos > pontosTuristicos2);
     printf("Comparação de densidade populacional entre as cartas:\n");
     printf("Carta 1: %lu\n", densidadePopulacional < densidadePopulacional2);
     printf("Comparação de índice PIB per capita entre as cartas:\n");
     printf("Carta 1: %lu\n", indicePibPerCapita > indicePibPerCapita2);
     printf("Comparação de super poder entre as cartas:\n");
     printf("Carta 1: %lu\n", superPoder > superPoder2);
     */

    char estado[50] = "EstadoX";
    int codigo = 1;
    char cidade[50] = "CidadeY";
    unsigned long int populacao = 100000;
    float area = 250.5;
    float pib = 50000.0;
    int pontosTuristicos = 5;
    float densidadePopulacional = (float)populacao / area;
    float indicePibPerCapita = (float)pib / populacao;
    float superPoder = (float)populacao + area + pib + pontosTuristicos + densidadePopulacional + indicePibPerCapita;
    float somaDosAtributosSelecionados = 0.0;

    printf("Carta 1 \n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %d\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional);
    printf("Indice PIB per Capita: %.2f\n", indicePibPerCapita);

    char estado2[50] = "EstadoA";
    int codigo2 = 2;
    char cidade2[50] = "CidadeB";
    unsigned long int populacao2 = 150000;
    float area2 = 300.0;
    float pib2 = 60000.0;
    int pontosTuristicos2 = 8;
    float densidadePopulacional2 = (float)populacao2 / area2;
    float indicePibPerCapita2 = (float)pib2 / populacao2;
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePopulacional2 + indicePibPerCapita2;
    float somaDosAtributosSelecionados2 = 0.0;

    printf("Carta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %d\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("Indice PIB per Capita: %.2f\n", indicePibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("***************************************************\n");
    printf("Escolha a primeira atributo para jogar sua carta ");
    printf("\n");
    printf("1-População\n");
    printf("2-Área\n");
    printf("3-PIB\n");
    printf("4-Pontos Turísticos\n");
    printf("5-Densidade Populacional\n");
    printf("6-Índice PIB per Capita\n");
    printf("7-Super Poder\n");
    int escolha01;
    scanf("%d", &escolha01);

    printf("***************************************************\n");
    printf("Escolha a segunda atributo para jogar sua carta ");
    printf("\n");
    if (escolha01 != 1)
    {
        printf("1-População\n");
    }
    if (escolha01 != 2)
    {
        printf("2-Área\n");
    }
    if (escolha01 != 3)
    {
        printf("3-PIB\n");
    }
    if (escolha01 != 4)
    {
        printf("4-Pontos Turísticos\n");
    }
    if (escolha01 != 5)
    {
        printf("5-Densidade Populacional\n");
    }
    if (escolha01 != 6)
    {
        printf("6-Índice PIB per Capita\n");
    }
    if (escolha01 != 7)
    {
        printf("7-Super Poder\n");
    }
    int escolha02;
    scanf("%d", &escolha02);

    if (escolha02 == escolha01)
    {
        printf("Escolha inválida! As características escolhidas não podem ser as mesmas.\n");
        return 0;
    }

    printf("***************************************************\n");
    printf("Resultado da comparação das cartas:\n");
    printf("Carta 1 - Cidade : %s\n", cidade);
    printf("Carta 2 - Cidade : %s\n", cidade2);

    switch (escolha01)
    {
    case 1:
        somaDosAtributosSelecionados += populacao;
        somaDosAtributosSelecionados2 += populacao2;
        if (populacao > populacao2)
        {
            printf("População \n ");
            printf("Carta 1 - %s : %lu \n ", cidade, populacao);
            printf("Carta 2 - %s : %lu \n ", cidade2, populacao2);
            printf("Resultado: Carta 1 %s vence com população %lu contra %lu\n", cidade, populacao, populacao2);
        }
        else if (populacao < populacao2)
        {
            printf("População \n ");
            printf("Carta 1 - %s : %lu \n ", cidade, populacao);
            printf("Carta 2 - %s : %lu \n ", cidade2, populacao2);
            printf("Resultado: Carta 2 %s vence com população %lu contra %lu\n", cidade2, populacao2, populacao);
        }
        else
        {
            printf("População \n ");
            printf("Carta 1 - %s : %lu \n ", cidade, populacao);
            printf("Carta 2 - %s : %lu \n ", cidade2, populacao2);
            printf("Resultado: Empate na população: %lu\n", populacao);
        }

        break;
    case 2:
        somaDosAtributosSelecionados += area;
        somaDosAtributosSelecionados2 += area2;
        if (area > area2)
        {
            printf("Área \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, area);
            printf("Carta 2 - %s : %.2f \n ", cidade2, area2);
            printf("Resultado: Carta 1 %s vence com área %.2f contra %.2f\n", cidade, area, area2);
        }
        else if (area < area2)
        {
            printf("Área \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, area);
            printf("Carta 2 - %s : %.2f \n ", cidade2, area2);
            printf("Resultado: Carta 2 %s vence com área %.2f contra %.2f\n", cidade2, area2, area);
        }
        else
        {
            printf("Área \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, area);
            printf("Carta 2 - %s : %.2f \n ", cidade2, area2);
            printf("Resultado: Empate na área: %.2f\n", area);
        }
        break;
    case 3:
        somaDosAtributosSelecionados += pib;
        somaDosAtributosSelecionados2 += pib2;
        if (pib > pib2)
        {
            printf("PIB \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, pib);
            printf("Carta 2 - %s : %.2f \n ", cidade2, pib2);
            printf("Resultado: Carta 1 %s vence com PIB %.2f contra %.2f\n", cidade, pib, pib2);
        }
        else if (pib < pib2)
        {
            printf("PIB \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, pib);
            printf("Carta 2 - %s : %.2f \n ", cidade2, pib2);
            printf("Resultado: Carta 2 %s vence com PIB %.2f contra %.2f\n", cidade2, pib2, pib);
        }
        else
        {
            printf("PIB \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, pib);
            printf("Carta 2 - %s : %.2f \n ", cidade2, pib2);
            printf("Resultado: Empate no PIB: %.2f\n", pib);
        }

        break;
    case 4:
        somaDosAtributosSelecionados += pontosTuristicos;
        somaDosAtributosSelecionados2 += pontosTuristicos2;
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("Pontos Turísticos \n ");
            printf("Carta 1 - %s : %d \n ", cidade, pontosTuristicos);
            printf("Carta 2 - %s : %d \n ", cidade2, pontosTuristicos2);
            printf("Resultado: Carta 1 %s vence com pontos turísticos %d contra %d\n", cidade, pontosTuristicos, pontosTuristicos2);
        }
        else if (pontosTuristicos < pontosTuristicos2)
        {
            printf("Pontos Turísticos \n ");
            printf("Carta 1 - %s : %d \n ", cidade, pontosTuristicos);
            printf("Carta 2 - %s : %d \n ", cidade2, pontosTuristicos2);
            printf("Resultado: Carta 2 %s vence com pontos turísticos %d contra %d\n", cidade2, pontosTuristicos2, pontosTuristicos);
        }
        else
        {
            printf("Pontos Turísticos \n ");
            printf("Carta 1 - %s : %d \n ", cidade, pontosTuristicos);
            printf("Carta 2 - %s : %d \n ", cidade2, pontosTuristicos2);
            printf("Resultado: Empate nos pontos turísticos: %d\n", pontosTuristicos);
        }

        break;
    case 5:
        somaDosAtributosSelecionados += densidadePopulacional;
        somaDosAtributosSelecionados2 += densidadePopulacional2;
        if (densidadePopulacional < densidadePopulacional2)
        {
            printf("Densidade Populacional \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, densidadePopulacional);
            printf("Carta 2 - %s : %.2f \n ", cidade2, densidadePopulacional2);
            printf("Resultado: Carta 1 %s vence com densidade populacional %.2f contra %.2f\n", cidade, densidadePopulacional, densidadePopulacional2);
        }
        else if (densidadePopulacional > densidadePopulacional2)
        {
            printf("Densidade Populacional \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, densidadePopulacional);
            printf("Carta 2 - %s : %.2f \n ", cidade2, densidadePopulacional2);
            printf("Resultado: Carta 2 %s vence com densidade populacional %.2f contra %.2f\n", cidade2, densidadePopulacional2, densidadePopulacional);
        }
        else
        {
            printf("Densidade Populacional \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, densidadePopulacional);
            printf("Carta 2 - %s : %.2f \n ", cidade2, densidadePopulacional2);
            printf("Resultado: Empate na densidade populacional: %.2f\n", densidadePopulacional);
        }

        break;
    case 6:
        somaDosAtributosSelecionados += indicePibPerCapita;
        somaDosAtributosSelecionados2 += indicePibPerCapita2;
        if (indicePibPerCapita > indicePibPerCapita2)
        {
            printf("Índice PIB per Capita \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, indicePibPerCapita);
            printf("Carta 2 - %s : %.2f \n ", cidade2, indicePibPerCapita2);
            printf("Resultado: Carta 1 %s vence com índice PIB per capita %.2f contra %.2f\n", cidade, indicePibPerCapita, indicePibPerCapita2);
        }
        else if (indicePibPerCapita < indicePibPerCapita2)
        {
            printf("Índice PIB per Capita \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, indicePibPerCapita);
            printf("Carta 2 - %s : %.2f \n ", cidade2, indicePibPerCapita2);
            printf("Resultado: Carta 2 %s vence com índice PIB per capita %.2f contra %.2f\n", cidade2, indicePibPerCapita2, indicePibPerCapita);
        }
        else
        {
            printf("Índice PIB per Capita \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, indicePibPerCapita);
            printf("Carta 2 - %s : %.2f \n ", cidade2, indicePibPerCapita2);
            printf("Resultado: Empate no índice PIB per capita: %.2f\n", indicePibPerCapita);
        }

        break;
    case 7:
        somaDosAtributosSelecionados += superPoder;
        somaDosAtributosSelecionados2 += superPoder2;
        if (superPoder > superPoder2)
        {
            printf("Super Poder \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, superPoder);
            printf("Carta 2 - %s : %.2f \n ", cidade2, superPoder2);
            printf("Resultado: Carta 1 %s vence com super poder %.2f contra %.2f\n", cidade, superPoder, superPoder2);
        }
        else if (superPoder < superPoder2)
        {
            printf("Super Poder \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, superPoder);
            printf("Carta 2 - %s : %.2f \n ", cidade2, superPoder2);
            printf("Resultado: Carta 2 %s vence com super poder %.2f contra %.2f\n", cidade2, superPoder2, superPoder);
        }
        else
        {
            printf("Super Poder \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, superPoder);
            printf("Carta 2 - %s : %.2f \n ", cidade2, superPoder2);
            printf("Resultado: Empate no super poder: %.2f\n", superPoder);
        }

        break;
    default:
        break;
    }

    switch (escolha02)
    {
    case 1:
        somaDosAtributosSelecionados += populacao;
        somaDosAtributosSelecionados2 += populacao2;
        if (populacao > populacao2)
        {
            printf("População \n ");
            printf("Carta 1 - %s : %lu \n ", cidade, populacao);
            printf("Carta 2 - %s : %lu \n ", cidade2, populacao2);
            printf("Resultado: Carta 1 %s vence com população %lu contra %lu\n", cidade, populacao, populacao2);
        }
        else if (populacao < populacao2)
        {
            printf("População \n ");
            printf("Carta 1 - %s : %lu \n ", cidade, populacao);
            printf("Carta 2 - %s : %lu \n ", cidade2, populacao2);
            printf("Resultado: Carta 2 %s vence com população %lu contra %lu\n", cidade2, populacao2, populacao);
        }
        else
        {
            printf("População \n ");
            printf("Carta 1 - %s : %lu \n ", cidade, populacao);
            printf("Carta 2 - %s : %lu \n ", cidade2, populacao2);
            printf("Resultado: Empate na população: %lu\n", populacao);
        }

        break;
    case 2:
        somaDosAtributosSelecionados += area;
        somaDosAtributosSelecionados2 += area2;
        if (area > area2)
        {
            printf("Área \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, area);
            printf("Carta 2 - %s : %.2f \n ", cidade2, area2);
            printf("Resultado: Carta 1 %s vence com área %.2f contra %.2f\n", cidade, area, area2);
        }
        else if (area < area2)
        {
            printf("Área \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, area);
            printf("Carta 2 - %s : %.2f \n ", cidade2, area2);
            printf("Resultado: Carta 2 %s vence com área %.2f contra %.2f\n", cidade2, area2, area);
        }
        else
        {
            printf("Área \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, area);
            printf("Carta 2 - %s : %.2f \n ", cidade2, area2);
            printf("Resultado: Empate na área: %.2f\n", area);
        }
        break;
    case 3:
        somaDosAtributosSelecionados += pib;
        somaDosAtributosSelecionados2 += pib2;
        if (pib > pib2)
        {
            printf("PIB \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, pib);
            printf("Carta 2 - %s : %.2f \n ", cidade2, pib2);
            printf("Resultado: Carta 1 %s vence com PIB %.2f contra %.2f\n", cidade, pib, pib2);
        }
        else if (pib < pib2)
        {
            printf("PIB \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, pib);
            printf("Carta 2 - %s : %.2f \n ", cidade2, pib2);
            printf("Resultado: Carta 2 %s vence com PIB %.2f contra %.2f\n", cidade2, pib2, pib);
        }
        else
        {
            printf("PIB \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, pib);
            printf("Carta 2 - %s : %.2f \n ", cidade2, pib2);
            printf("Resultado: Empate no PIB: %.2f\n", pib);
        }

        break;
    case 4:
        somaDosAtributosSelecionados += pontosTuristicos;
        somaDosAtributosSelecionados2 += pontosTuristicos2;
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("Pontos Turísticos \n ");
            printf("Carta 1 - %s : %d \n ", cidade, pontosTuristicos);
            printf("Carta 2 - %s : %d \n ", cidade2, pontosTuristicos2);
            printf("Resultado: Carta 1 %s vence com pontos turísticos %d contra %d\n", cidade, pontosTuristicos, pontosTuristicos2);
        }
        else if (pontosTuristicos < pontosTuristicos2)
        {
            printf("Pontos Turísticos \n ");
            printf("Carta 1 - %s : %d \n ", cidade, pontosTuristicos);
            printf("Carta 2 - %s : %d \n ", cidade2, pontosTuristicos2);
            printf("Resultado: Carta 2 %s vence com pontos turísticos %d contra %d\n", cidade2, pontosTuristicos2, pontosTuristicos);
        }
        else
        {
            printf("Pontos Turísticos \n ");
            printf("Carta 1 - %s : %d \n ", cidade, pontosTuristicos);
            printf("Carta 2 - %s : %d \n ", cidade2, pontosTuristicos2);
            printf("Resultado: Empate nos pontos turísticos: %d\n", pontosTuristicos);
        }

        break;
    case 5:
        somaDosAtributosSelecionados += densidadePopulacional;
        somaDosAtributosSelecionados2 += densidadePopulacional2;
        if (densidadePopulacional < densidadePopulacional2)
        {
            printf("Densidade Populacional \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, densidadePopulacional);
            printf("Carta 2 - %s : %.2f \n ", cidade2, densidadePopulacional2);
            printf("Resultado: Carta 1 %s vence com densidade populacional %.2f contra %.2f\n", cidade, densidadePopulacional, densidadePopulacional2);
        }
        else if (densidadePopulacional > densidadePopulacional2)
        {
            printf("Densidade Populacional \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, densidadePopulacional);
            printf("Carta 2 - %s : %.2f \n ", cidade2, densidadePopulacional2);
            printf("Resultado: Carta 2 %s vence com densidade populacional %.2f contra %.2f\n", cidade2, densidadePopulacional2, densidadePopulacional);
        }
        else
        {
            printf("Densidade Populacional \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, densidadePopulacional);
            printf("Carta 2 - %s : %.2f \n ", cidade2, densidadePopulacional2);
            printf("Resultado: Empate na densidade populacional: %.2f\n", densidadePopulacional);
        }

        break;
    case 6:
        somaDosAtributosSelecionados += indicePibPerCapita;
        somaDosAtributosSelecionados2 += indicePibPerCapita2;
        if (indicePibPerCapita > indicePibPerCapita2)
        {
            printf("Índice PIB per Capita \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, indicePibPerCapita);
            printf("Carta 2 - %s : %.2f \n ", cidade2, indicePibPerCapita2);
            printf("Resultado: Carta 1 %s vence com índice PIB per capita %.2f contra %.2f\n", cidade, indicePibPerCapita, indicePibPerCapita2);
        }
        else if (indicePibPerCapita < indicePibPerCapita2)
        {
            printf("Índice PIB per Capita \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, indicePibPerCapita);
            printf("Carta 2 - %s : %.2f \n ", cidade2, indicePibPerCapita2);
            printf("Resultado: Carta 2 %s vence com índice PIB per capita %.2f contra %.2f\n", cidade2, indicePibPerCapita2, indicePibPerCapita);
        }
        else
        {
            printf("Índice PIB per Capita \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, indicePibPerCapita);
            printf("Carta 2 - %s : %.2f \n ", cidade2, indicePibPerCapita2);
            printf("Resultado: Empate no índice PIB per capita: %.2f\n", indicePibPerCapita);
        }

        break;
    case 7:
        somaDosAtributosSelecionados += superPoder;
        somaDosAtributosSelecionados2 += superPoder2;
        if (superPoder > superPoder2)
        {
            printf("Super Poder \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, superPoder);
            printf("Carta 2 - %s : %.2f \n ", cidade2, superPoder2);
            printf("Resultado: Carta 1 %s vence com super poder %.2f contra %.2f\n", cidade, superPoder, superPoder2);
        }
        else if (superPoder < superPoder2)
        {
            printf("Super Poder \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, superPoder);
            printf("Carta 2 - %s : %.2f \n ", cidade2, superPoder2);
            printf("Resultado: Carta 2 %s vence com super poder %.2f contra %.2f\n", cidade2, superPoder2, superPoder);
        }
        else
        {
            printf("Super Poder \n ");
            printf("Carta 1 - %s : %.2f \n ", cidade, superPoder);
            printf("Carta 2 - %s : %.2f \n ", cidade2, superPoder2);
            printf("Resultado: Empate no super poder: %.2f\n", superPoder);
        }

        break;
    default:
        break;
    }

    printf("Soma dos atributos selecionados: (Carta 1): %.2f\n", somaDosAtributosSelecionados);
    printf("Soma dos atributos selecionados: (Carta 2): %.2f\n", somaDosAtributosSelecionados2);

    if (somaDosAtributosSelecionados > somaDosAtributosSelecionados2)
    {
        printf("Resultado Final: Carta 1 %s vence com soma dos atributos %.2f contra %.2f\n", cidade, somaDosAtributosSelecionados, somaDosAtributosSelecionados2);
    }
    else if (somaDosAtributosSelecionados < somaDosAtributosSelecionados2)
    {
        printf("Resultado Final: Carta 2 %s vence com soma dos atributos %.2f contra %.2f\n", cidade2, somaDosAtributosSelecionados2, somaDosAtributosSelecionados);
    }
    else
    {
        printf("Resultado Final: Empate na soma dos atributos: %.2f\n", somaDosAtributosSelecionados);
    }

    return 0;
}
