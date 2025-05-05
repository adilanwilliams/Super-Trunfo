#include <stdio.h>
#include <string.h>

int main(){
    char letrasDosEstados[2];
    char nomes[2][30];
    int populacao[2];
    float area[2];
    float PIB[2];
    int quantidadePontosTuristicos[2];

    printf("=== Super Trunfo ===\n\n");

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n\n");

    printf("Digite uma letra de 'A' a 'H' que represente um dos oito estados: ");
    scanf("%c", &letrasDosEstados[0]);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa o '\n' deixado no buffer
    fgets(nomes[0], sizeof(nomes[0]), stdin);
    nomes[0][strcspn(nomes[0], "\n")] = '\0'; 

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao[0]);

    printf("Digite a area da cidade'(em km²)': ");
    scanf("%f", &area[0]);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB[0]);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &quantidadePontosTuristicos[0]);



    printf("\n\nCadastro da segunda carta: \n\n");
    getchar(); // Limpa o buffer antes de ler o próximo caractere
  
    printf("Digite uma letra de 'A' a 'H' que represente um dos oito estados: ");
    scanf("%c", &letrasDosEstados[1]);

    printf("Digite o nome da cidade: ");
    getchar(); // limpa o '\n' deixado no buffer
    fgets(nomes[1], sizeof(nomes[1]), stdin);
    nomes[1][strcspn(nomes[1], "\n")] = '\0'; 

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao[1]);

    printf("Digite a area da cidade'(em km²)': ");
    scanf("%f", &area[1]);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB[1]);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &quantidadePontosTuristicos[1]);


    //exibindo as cartas
    printf("\n\n\n--- Carta 1 ---\n");

    printf("\nEstado: %c", letrasDosEstados[0]);
    printf("\nCodigo: %c%s", letrasDosEstados[0], "01");
    printf("\nNome: %s", nomes[0]);
    printf("\nPopulacao: %d", populacao[0]);
    printf("\nArea: %fkm²", area[0]);
    printf("\nPIB: %f bilhoes de reais", PIB[0]);
    printf("\nNúmero de Pontos Turísticos: %d\n", quantidadePontosTuristicos[0]);

    printf("\n\n\n--- Carta 2 ---\n");
    printf("\nEstado: %c", letrasDosEstados[1]);
    printf("\nCodigo: %c%s", letrasDosEstados[1], "11");
    printf("\nNome: %s", nomes[1]);
    printf("\nPopulacao: %d", populacao[1]);
    printf("\nArea: %fkm²", area[1]);
    printf("\nPIB: %f bilhoes de reais", PIB[1]);
    printf("\nNúmero de Pontos Turísticos: %d\n", quantidadePontosTuristicos[1]);

}