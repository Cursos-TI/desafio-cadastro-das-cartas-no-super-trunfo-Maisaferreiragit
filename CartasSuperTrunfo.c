#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.


int main() {

    char estado;
  char codigo [10] = "R01";
  char cidade [20];
  int populacao;
  float area;
  float pib;
  int pontos; 

  //Cadastro das Cartas:
  //Carta 1:

  printf("Carta 1: \n");
  printf("Digite uma letra de 'A' a 'Z': \n");
  scanf("%s", &estado);

  printf("Digite a letra do estado seguida de um número de 01 a 04: \n");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &cidade);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%s", &populacao);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%s", &area);

  printf("Digite o produto interno bruto da cidade: \n");
  scanf("%c", &pib);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &pontos);


//Carta 2:
   printf("Carta 2: \n");
  printf("Digite uma letra de 'A' a 'Z': \n");
  scanf("%s", &estado);

  printf("Digite a letra do estado seguida de um número de 01 a 04: \n");
  scanf("%s", &codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &cidade);

  printf("Digite o número de habitantes da cidade: \n");
  scanf("%s", &populacao);

  printf("Digite a área da cidade em quilômetros quadrados: \n");
  scanf("%s", &area);

  printf("Digite o produto interno bruto da cidade: \n");
  scanf("%c", &pib);

  printf("Digite o número de pontos turísticos: \n");
  scanf("%d", &pontos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
