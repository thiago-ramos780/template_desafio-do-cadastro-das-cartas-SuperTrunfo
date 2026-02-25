#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontoTuristico1, pontoTuristico2;


  // Área para entrada de dados
  // Carta 1:
  printf("Digite a sigla do estado 1: \n");
  scanf(" %c", &estado1);

  printf("Digite o cógido 1: \n");
  scanf("%s", &codigo1);

  printf("Digite o nome da cidade 1: \n");
  scanf("%s", &nomeCidade1);

  printf("Digite a população 1: \n");
  scanf("%d", &populacao1);

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
  scanf("%d", &populacao2);

  printf("Digite a área 2: \n");
  scanf("%f", &area2);

  printf("Digite o PIB 2: \n");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turísticos 2: \n");
  scanf("%d", &pontoTuristico2);

  // Área para exibição dos dados da cidade
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n\n", pontoTuristico1);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);

return 0;
} 
