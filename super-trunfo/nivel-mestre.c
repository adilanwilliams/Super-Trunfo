#include <stdio.h>
#include <string.h>

int main(){
    char letrasDosEstados[2];
    char nomes[2][30];
    unsigned long int populacao[2];
    float area[2];
    float PIB[2];
    int quantidadePontosTuristicos[2];
    float densidadePopulacional[2];
    float PIBPerCapita[2];
    float superPoder[2];

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
    scanf("%lu", &populacao[0]);

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
    scanf("%lu", &populacao[1]);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area[1]);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB[1]);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &quantidadePontosTuristicos[1]);


    //calculos de Densidade Populacional, PIB per Capita e Super Poder
    densidadePopulacional[0] = populacao[0] / area[0];
    densidadePopulacional[1] = populacao[1] / area[1];

    PIBPerCapita[0] = PIB[0] / populacao[0];
    PIBPerCapita[1] = PIB[1] / populacao[1];

    superPoder[0] = (float)populacao[0] + area[0] + (PIB[0] * 1000000000.0f) + (float)quantidadePontosTuristicos[0] + PIBPerCapita[0] + (1.0f / densidadePopulacional[0]);
    superPoder[1] = (float)populacao[1] + area[1] + (PIB[1] * 1000000000.0f) + (float)quantidadePontosTuristicos[1] + PIBPerCapita[1] + (1.0f / densidadePopulacional[1]);


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


    printf("\n\n\n\n--- Resultados ---\n");

    printf("População: Carta %d venceu (%d)\n", ((int)(populacao[0] < populacao[1])) + 1, populacao[0] > populacao[1]);
    printf("Área: Carta %d venceu (%d)\n", ((int)(area[0] < area[1])) + 1, area[0] > area[1]);
    printf("PIB: Carta %d venceu (%d)\n", ((int)(PIB[0] < PIB[1])) + 1, PIB[0] > PIB[1]);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", ((int)(quantidadePontosTuristicos[0] < quantidadePontosTuristicos[1])) + 1, quantidadePontosTuristicos[0] > quantidadePontosTuristicos[1]);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", ((int)(densidadePopulacional[0] > densidadePopulacional[1])) + 1, densidadePopulacional[0] < densidadePopulacional[1]); // menor é melhor
    printf("PIB per Capita: Carta %d venceu (%d)\n", ((int)(PIBPerCapita[0] < PIBPerCapita[1])) + 1, PIBPerCapita[0] > PIBPerCapita[1]);
    printf("Super Poder: Carta %d venceu (%d)\n", ((int)(superPoder[0] < superPoder[1])) + 1, superPoder[0] > superPoder[1]);

    return 0;
}
