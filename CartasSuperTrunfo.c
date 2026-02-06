#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
unsigned long int populaçao, pontos; // Área para definição das variáveis para armazenar as propriedades das cidades
float area, pib;
char codigo [5];
char nome [50];
char estado;
float densidade;
float densidadeinversa;
float pibpercapta;
float superpoder;

int populaçao2, pontos2;
float area2, pib2;
char codigo2 [5];
char nome2 [50];
char estado2;
float densidade2;
float densidadeinversa2;
float pibpercapta2;
float superpoder2;

int resultadoPopulaçao;
int resultadoPontos;
int resultadoArea;
int resultadoPib;
int resultadoDensidade;
int resultadoPibpercapta;
int resultadoSuperpoder;


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

//Área para o cálculo de Densidade Populacional e PIB per Capita (conversão explicita)
densidade = (float) populaçao / area;
densidadeinversa = area / (float) populaçao;
pibpercapta = (float) pib / populaçao;

densidade2 = (float) populaçao2 / area2;
densidadeinversa2 = area2 / (float) populaçao2;
pibpercapta2 = (float) pib2 / populaçao2;

//Área para calculo de Super poder
superpoder = (float) populaçao + area + pib + (float) pontos + pibpercapta + densidadeinversa;
superpoder2 = (float) populaçao2 + area2 + pib2 + (float) pontos2 + pibpercapta2 + densidadeinversa2;

printf("\n**** - Dados da carta 1 - ****\n");

printf("\n");

// Área para exibição dos dados da cidade 1
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
printf("Super Poder: %.2f\n", superpoder);

printf("--------------------------------------------\n");


printf("\n**** - Dados da carta 2 - ****\n");

printf("\n");

// Área para exibição dos dados da cidade 2
printf("Carta 2:\n");
printf("Estado: %c\n", estado2); 
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", nome2);
printf("População: %d habitantes\n", populaçao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f Bilhoes de reais\n", pib2);
printf("Pontos turísticos: %d\n", pontos2);
printf("Densidade populacional: %f hab/km²\n", densidade2);
printf("PIB per capta: %f reais\n", pibpercapta2);
printf("Super Poder: %.2f\n", superpoder2);

resultadoPopulaçao = populaçao > populaçao2;
resultadoPontos = pontos > pontos2;
resultadoArea = area > area2;
resultadoPib = pib > pib2;
resultadoDensidade = densidade < densidade2;
resultadoPibpercapta = pibpercapta > pibpercapta2;
resultadoSuperpoder = superpoder > superpoder2;

//Comparação de combate das cartas
printf("\n **** - COMBATE - ***\n");
printf("População: carta %d venceu \n", 2 -resultadoPopulaçao);
printf("Área: carta %d venceu \n", 2 - resultadoArea);
printf("PIB: carta %d venceu \n", 2 - resultadoPib);
printf("Pontos turísticos: carta %d venceu \n", 2 - resultadoPontos);
printf("Densidade populacional: carta %d venceu \n", 2 - resultadoDensidade);
printf("PIB per capta: carta %d venceu \n", 2 - resultadoPibpercapta);
printf("SUPER PODER: carta %d venceu \n", 2 - resultadoSuperpoder);


return 0;
} 

