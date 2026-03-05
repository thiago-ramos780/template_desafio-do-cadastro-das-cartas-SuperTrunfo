#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

  // Área para entrada de dados
  // Carta 1:
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
  scanf("%d", &pontoTuristico2);
  
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
  printf("Comparação de cartas (Atributo: População):\n\n");
  printf("Carta 1 - São Paulo (SP): %lu\n", populacao1);
  printf("Carta 2 - Rio de Janeiro (RJ): %lu\n", populacao2);

  if(populacao1 > populacao2){
    printf("Resultado: Carta 1 (São Paulo) venceu!\n");
  } else {
    printf("Resultado: Carta 2 (Rio de Janeiro) venceu!\n");
  }
  
return 0;
} 
