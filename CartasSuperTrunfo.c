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
    float densidade1, densidade2;
    float capita1, capita2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // CARTA 1:

    printf("Digite uma letra de 'A' a 'H' para representar o seu estado: ");
    scanf("%s", estado1);

    printf("Digite a letra do seu estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo1);

    getchar(); // limpar buffer

    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin); 

    printf("Digite o número de habitantes desta cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área desta cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produto interno desta cidade (PIB): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turistico1);

    // CALCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA DA CARTA 1:

    densidade1 = (float) populacao1 / area1;
    capita1 = (pib1 * 1000000000) / populacao1;

    // CARTA 2:
    
    printf("Digite uma letra de 'A' a 'H' para representar o seu segundo estado: ");
    scanf("%s", estado2);

    printf("Digite a letra do seu segundo estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo2);

    getchar(); // limpar buffer

    printf("Digite o nome da segunda cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin); 

    printf("Digite o número de habitantes desta segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área desta segunda cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produto interno desta segunda cidade (PIB): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na segunda cidade: ");
    scanf("%d", &turistico2);
    printf("\n----------------------------------------\n");

     // CALCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA DA CARTA 2:

    densidade2 = (float) populacao2 / area2;
    capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // EXIBIÇÃO DAS DUAS CARTAS:

    // CARTA 1:

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);

    // CARTA 2: 
    printf("\n----------------------------------------\n");
    

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);


    return 0;

}
