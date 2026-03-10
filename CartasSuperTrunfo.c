#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1 = 'A', estado2 = 'B';
    char codigo1[5] = "A01", codigo2[5] = "B02";
    char nomeCidade1[50] = "SãoPaulo", nomeCidade2[50] = "RiodeJaneiro";
    unsigned long int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int pontoTuristico1 = 50, pontoTuristico2 = 30;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

  // Área para entrada de dados
  // Carta 1:
  /*
  printf("Digite a sigla do estado 1: \n");
  scanf(" %c", &estado1);
  printf("Digite o cógido 1: \n");
  scanf("%s", &codigo1);
  printf("Digite o nome da cidade 1: \n");
  scanf("%s", &nomeCidade1);
  printf("Digite a população 1: \n");
  scanf("%lu", &populacao1);
  printf("Digite a área 1: \n");
  scanf("%f", &area1);
  printf("Digite o PIB 1: \n");
  scanf("%f", &pib1);
  printf("Digite a quantidade de pontos turísticos 1: \n");
  scanf("%d", &pontoTuristico1);

  //Carta 2:
  printf("Digite a sigla do estado 2: \n");
  scanf(" %c", &estado2);
  printf("Digite o cógido 2: \n");
  scanf("%s", &codigo2);
  printf("Digite o nome da cidade 2: \n");
  scanf("%s", &nomeCidade2);
  printf("Digite a população 2: \n");
  scanf("%lu", &populacao2);
  printf("Digite a área 2: \n");
  scanf("%f", &area2);
  printf("Digite o PIB 2: \n");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turísticos 2: \n");
  scanf("%d", &pontoTuristico2);*/
  
  //Cálculos
  //densidade populacional e PIB per capita
  densidadePopulacional1 = (float) populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

  densidadePopulacional2 = (float) populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

  //super poder
  superPoder1 = (float) populacao1 + area1 + pib1 + pontoTuristico1 + densidadePopulacional1 + pibPerCapita1;

  superPoder2 = (float) populacao2 + area2 + pib2 + pontoTuristico2 + densidadePopulacional2 + pibPerCapita2;

  // Área para exibição dos dados da cidade
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontoTuristico1);
  printf("A Densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("O PIB per Capita: %.2f reais\n", pibPerCapita1);
  printf("Super Poder: %.2f\n\n", superPoder1);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);
  printf("A Densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("O PIB per Capita: %.2f reais\n", pibPerCapita2);
  printf("Super Poder: %.2f\n\n", superPoder2);

  //Comparação de cartas:
  int aOpcao1, aOpcao2, bOpcao1, bOpcao2;
  char *aAtributo1, *aAtributo2, *bAtributo1, *bAtributo2;
  float aResultado1, aResultado2, bResultado1, bResultado2;

  //Carta A:
  printf("escolha um atributo para comparação: \n");
  printf("1. População \n");
  printf("2. PIB \n");
  printf("3. Pontos turísticos \n");
  printf("4. Densidade demográfica \n");

  scanf("%d", &aOpcao1);

  switch (aOpcao1)
  {
  case 1:
    aResultado1 = populacao1;
    aAtributo1 = "População";
    break;
  case 2:
    aResultado1 = pib1;
    aAtributo1 = "PIB";
    break;
  case 3:
    aResultado1 = pontoTuristico1;
    aAtributo1 = "PontoTurístico";
    break;
  case 4:
    aResultado1 = densidadePopulacional1;
    aAtributo1 = "DensidadePopulacional";
    break;
  default:
    printf("Valor inválido.\n");
    break;
  }

  printf("Escolha um segundo atributo:\n");
  printf("1. População \n");
  printf("2. PIB \n");
  printf("3. Pontos turísticos \n");
  printf("4. Densidade demográfica \n");

  scanf("%d", &aOpcao2);

  if(aOpcao2 == aOpcao1){
    printf("Valor inválido. Mesmo atributo.\n");
  } else {
    switch (aOpcao2)
    {
  case 1:
    aResultado2 = populacao1;
    aAtributo2 = "População";
    break;
  case 2:
    aResultado2 = pib1;
    aAtributo2 = "PIB";
    break;
  case 3:
    aResultado2 = pontoTuristico1;
    aAtributo2 = "PontoTurístico";
    break;
  case 4:
    aResultado2 = densidadePopulacional1;
    aAtributo2 = "DensidadePopulacional";
    break;
  default:
    printf("Valor inválido.\n");
    break;
    }
  }

  //carta B:
  printf("escolha um atributo para comparação: \n");
  printf("1. População \n");
  printf("2. PIB \n");
  printf("3. Pontos turísticos \n");
  printf("4. Densidade demográfica \n");

  scanf("%d", &bOpcao1);

  switch (bOpcao1)
  {
  case 1:
    bResultado1 = populacao2;
    bAtributo1 = "População";
    break;
  case 2:
    bResultado1 = pib2;
    bAtributo1 = "PIB";
    break;
  case 3:
    bResultado1 = pontoTuristico2;
    bAtributo1 = "PontoTurístico";
    break;
  case 4:
    bResultado1 = densidadePopulacional2;
    bAtributo1 = "DensidadeDemográfica";
    break;
  default:
    printf("Valor inválido.\n");
    break;
  }

  printf("Escolha um segundo atributo:\n");
  printf("1. População \n");
  printf("2. PIB \n");
  printf("3. Pontos turísticos \n");
  printf("4. Densidade demográfica \n");

  scanf("%d", &bOpcao2);

  if(bOpcao2 == bOpcao1){
    printf("Valor inválido. Mesmo atributo.\n");
  } else {
    switch (bOpcao2)
    {
    case 1:
    bResultado2 = populacao2;
    bAtributo2 = "População";
    break;
  case 2:
    bResultado2 = pib2;
    bAtributo2 = "PIB";
    break;
  case 3:
    bResultado2 = pontoTuristico2;
    bAtributo2 = "PontoTurístico";
    break;
  case 4:
    bResultado2 = densidadePopulacional2;
    bAtributo2 = "DensidadeDemográfica";
    break;
  default:
    printf("Valor inválido.\n");
    break;
    }
  }
  //exibir comparação
  if((aResultado1 + aResultado2) == (bResultado1 + bResultado2)){
    printf("Empatou!\n");
  } else if ((aResultado1 + aResultado2) > (bResultado1 + bResultado2)) {
    printf("Carta 1 com os atributos %s: %.2f e %s: %.2f\n", aAtributo1, aResultado1, aAtributo2, aResultado2);
    printf("A soma dos valores é: %.2f\n", aResultado1 + aResultado2);

    printf("Carta 2 com os atributos %s: %.2f e %s: %.2f\n", bAtributo1, bResultado1, bAtributo2, bResultado2);
    printf("A soma dos valores é: %.2f\n", bResultado1 + bResultado2);

    printf("Voce venceu\n");
  } else {
    printf("Carta 1 com os atributos %s: %.2f e %s: %.2f\n", aAtributo1, aResultado1, aAtributo2, aResultado2);
    printf("A soma dos valores é: %.2f\n", aResultado1 + aResultado2);

    printf("Carta 2 com os atributos %s: %.2f e %s: %.2f\n", bAtributo1, bResultado1, bAtributo2, bResultado2);
    printf("A soma dos valores é: %.2f\n", bResultado1 + bResultado2);
    printf("Voce perdeu\n");
  }
  
return 0;
} 
