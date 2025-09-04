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
    char codigo1[20];
    char codigo2[20];
    char cidade1[20];
    char cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    
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

    // Consumir o ENTER que ficou no buffer do scanf
    getchar();

    // CIDADE 01:
    printf("Digite o nome da Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin); 

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
    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n km²", area1);
    printf("PIB: %f\n bilhoes de reais", pib1);
    printf("Numero de pontos turisticos: %d\n", turistico1);

    // CARTA 2

    // ESTADO 02:
    printf("Digite uma letra de 'A' a 'H' para representar o seu segundo estado: ");
    scanf("%s", &estado2);

    // CÓDIGO 02:
    printf("Digite a letra do seu segundo estado seguida de um numero de 01 a 04: ");
    scanf("%s", &codigo2);

    // Consumir o ENTER que ficou no buffer do scanf
    getchar();

    // CIDADE 02:
    printf("Digite o nome da segunda Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin); 

    // POPULAÇÃO 02:
    printf("Digite o numero de habitantes desta segunda cidade: ");
    scanf("%d", &populacao2);

    // ÁREA 02:
    printf("Digite a area desta segunda cidade em quilometros quadrados: ");
    scanf("%f", &area2);

    // PIB 02:
    printf("Digite o produto interno desta segunda cidade (PIB): ");
    scanf("%f", &pib2);

    // TURÍSTICO 02:
    printf("Digite a quantidade de pontos turisticos da segunda cidade: ");
    scanf("%d", &turistico2);

    // EXIBIÇÃO DA CARTA 2:
    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n km²", area2);
    printf("PIB: %.2f\n bilhoes de reais", pib2);
    printf("Numero de pontos turisticos: %d\n", turistico2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
