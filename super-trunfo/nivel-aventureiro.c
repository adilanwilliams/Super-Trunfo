#include <stdio.h>
#include <string.h>

int main(){
    char letrasDosEstados[2];
    char nomes[2][30];
    int populacao[2];
    float area[2];
    float PIB[2];
    int quantidadePontosTuristicos[2];
    float densidadePopulacional[2];
    float PIBPerCapita[2];

    printf("=== Super Trunfo ===\n\n");

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n\n");

    printf("Digite uma letra de 'A' a 'H' que represente um dos oito estados: ");
    scanf(" %c", &letrasDosEstados[0]); // o espaço antes de %c ignora espaços em branco e quebras de linha

    printf("Digite o nome da cidade: ");
    getchar(); // limpa o '\n' deixado no buffer
    fgets(nomes[0], sizeof(nomes[0]), stdin);
    nomes[0][strcspn(nomes[0], "\n")] = '\0'; 

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao[0]);

    printf("Digite a área da cidade (em km²): ");
    
    scanf("%f", &area[0]);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB[0]);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &quantidadePontosTuristicos[0]);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n\n");

    printf("Digite uma letra de 'A' a 'H' que represente um dos oito estados: ");
    scanf(" %c", &letrasDosEstados[1]);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa o '\n' deixado no buffer
    fgets(nomes[1], sizeof(nomes[1]), stdin);
    nomes[1][strcspn(nomes[1], "\n")] = '\0';

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao[1]);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area[1]);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB[1]);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &quantidadePontosTuristicos[1]);


    //calculos de Densidade Populacional e PIB per Capita
    densidadePopulacional[0] = populacao[0] / area[0];
    densidadePopulacional[1] = populacao[1] / area[1];

    PIBPerCapita[0] = PIB[0] / populacao[0];
    PIBPerCapita[1] = PIB[1] / populacao[1];


    // Exibindo as cartas
    printf("\n\n\n--- Carta 1 ---\n");
    printf("Estado: %c\n", letrasDosEstados[0]);
    printf("Codigo: %c%s\n", letrasDosEstados[0], "01");
    printf("Nome: %s\n", nomes[0]);
    printf("População: %d\n", populacao[0]);
    printf("Área: %.2f km²\n", area[0]);
    printf("PIB: %.2f bilhões de reais\n", PIB[0]);
    printf("Número de Pontos Turísticos: %d\n", quantidadePontosTuristicos[0]);
    printf("Densidade Populacional: %.2f hab/km²: \n", densidadePopulacional[0]);
    printf("PIB per Capita: %.2f reais", PIBPerCapita[0]);

    printf("\n\n\n--- Carta 2 ---\n");
    printf("Estado: %c\n", letrasDosEstados[1]);
    printf("Codigo: %c%s\n", letrasDosEstados[1], "11");
    printf("Nome: %s\n", nomes[1]);
    printf("População: %d\n", populacao[1]);
    printf("Área: %.2f km²\n", area[1]);
    printf("PIB: %.2f bilhões de reais\n", PIB[1]);
    printf("Número de Pontos Turísticos: %d\n", quantidadePontosTuristicos[1]);
    printf("Densidade Populacional: %.2f hab/km²: \n", densidadePopulacional[1]);
    printf("PIB per Capita: %.6f reais", PIBPerCapita[1]);

    return 0;
}
