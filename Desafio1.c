#include <stdio.h>

int main (){
    char estado[50];
    char codigo[50];
    char nome [50];
    int populacao, numero;
    float area, pib;

    printf("Digite a primeira letra do Estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &numero);

    
    printf("Estado: %s \n", estado);

    printf("Código: %s \n", codigo);

    printf("Nome da cidade: %s \n", nome);

    printf("População: %d \n", populacao);

    printf("Área: %f \n ", area);

    printf("PIB: %f \n", pib );
    
    printf("Número de Pontos Turísticos: %d \n", numero);

    return 0;




}