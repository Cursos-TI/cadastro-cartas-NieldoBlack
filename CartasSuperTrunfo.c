#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
int populaçao,pontos; // Área para definição das variáveis para armazenar as propriedades das cidades
float area, pib;
char codigo [5];
char nome [50];
char estado;

printf("- Cadastro de cartas super trunfo -\n");

printf("\n"); // Para pular uma linha

printf("Digite a letra do estado (A-H): \n");  // Área para entrada de dados
scanf(" %c", &estado); // Espaço antes do %c para não dar erro de leitura 

printf("Digite o código da carta (ex: A01): \n");
scanf("%s", &codigo);

printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", &nome); // le o nome até o fim da linha (com espaços) 

printf("Digite o numero de população: \n");
scanf("%d", &populaçao);

printf("Digite a área(em km²): \n");
scanf("%f", &area);

printf("Digite o PIB: \n");
scanf("%f", &pib);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &pontos);

printf("\n - Dados da carta - \n");

printf("\n");

printf("Carta 1:\n");
printf("Estado: %c\n", estado); // Área para exibição dos dados da cidade
printf("Código: %s\n", codigo);
printf("Cidade: %s\n", nome);
printf("População: %d habitantes\n", populaçao);
printf("Área: %.2f Km²\n", area);
printf("PIB: %.2f Bilhoes de reais\n", pib);
printf("Pontos turísticos: %d\n", pontos);

return 0;
} 
