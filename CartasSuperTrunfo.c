#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Tainara Paula

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1[20];
    char estado2[20];
    char codigo1[10];
    char codigo2[10];
    char cidade1[20];
    char cidade2[20];
    int populacao1;
    int populacao2;
    float area1;
    float area2;
    float pib1;
    float pib2;
    int turistico1;
    int turistico2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // CARTA 1

    // ESTADO 01:
    printf("Digite uma letra de 'A' a 'H' para representar o seu estado: ");
    scanf("%s", &estado1);

    // CÓDIGO 01:
    printf("Digite a letra do seu estado seguida de um numero de 01 a 04: ");
    scanf("%s", &codigo1);

    // CIDADE 01:
    printf("Digite o nome da Cidade: ");
    scanf("%s", &cidade1);

    // POPULAÇÃO 01:
    printf("Digite o numero de habitantes desta cidade: ");
    scanf("%d", &populacao1);

    // ÁREA 01:
    printf("Digite a area desta cidade em quilometros quadrados: ");
    scanf("%f", &area1);

    // PIB 01:
    printf("Digite o produto interno desta cidade (PIB): ");
    scanf("%f", &pib1);

    // TURÍSTICO 01:
    printf("Digite a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turistico1);

    // EXIBIÇÃO DA CARTA 1:
    printf("Carta 1:");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turistico1);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}