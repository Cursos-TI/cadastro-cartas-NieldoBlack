#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
int populaçao, pontos; // Área para definição das variáveis para armazenar as propriedades das cidades
float area, pib;
char codigo [5];
char nome [50];
char estado;
float densidade;
float pibpercapta;

int populaçao2, pontos2;
float area2, pib2;
char codigo2 [5];
char nome2 [50];
char estado2;
float densidade2;
float pibpercapta2;

// Area para armazenar os dados da carta 1
printf("*** - Cadastro de cartas super trunfo - ***\n");

printf("\n"); // Para pular uma linha

printf("*** - Carta 1 - ***\n");

printf("\n"); 

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

// Area para armazenar os dados da carta 2
printf("\n*** - Cadastro de cartas super trunfo - ***\n");

printf("\n"); // Para pular uma linha

printf("*** - Carta 2 - ***\n");

printf("\n"); 

printf("Digite a letra do estado (A-H): \n");  // Área para entrada de dados
scanf(" %c", &estado2); // Espaço antes do %c para não dar erro de leitura 

printf("Digite o código da carta (ex: A01): \n");
scanf("%s", &codigo2);

printf("Digite o nome da cidade: \n");
scanf(" %[^\n]", &nome2); // le o nome até o fim da linha (com espaços) 

printf("Digite o numero de população: \n");
scanf("%d", &populaçao2);

printf("Digite a área(em km²): \n");
scanf("%f", &area2);

printf("Digite o PIB: \n");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: \n");
scanf("%d", &pontos2);


printf("\n**** - Dados da carta 1 - ****\n");

printf("\n");

densidade = populaçao/area;
pibpercapta = pib/populaçao;

// Área para exibição dos dados da cidade
printf("Carta 1:\n");
printf("Estado: %c\n", estado); 
printf("Código: %s\n", codigo);
printf("Cidade: %s\n", nome);
printf("População: %d habitantes\n", populaçao);
printf("Área: %.2f Km²\n", area);
printf("PIB: %.2f Bilhoes de reais\n", pib);
printf("Pontos turísticos: %d\n", pontos);
printf("Densidade populacional: %f hab/km²\n", densidade);
printf("PIB per capta: %f reais\n", pibpercapta);


printf("\n**** - Dados da carta 2 - ****\n");

printf("\n");

densidade2 = populaçao/area;
pibpercapta2 = pib/populaçao;

// Área para exibição dos dados da cidade
printf("Carta 1:\n");
printf("Estado: %c\n", estado2); 
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", nome2);
printf("População: %d habitantes\n", populaçao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f Bilhoes de reais\n", pib2);
printf("Pontos turísticos: %d\n", pontos2);
printf("Densidade populacional: %f hab/km²\n", densidade2);
printf("PIB per capta: %f reais\n", pibpercapta2);



return 0;
} 
