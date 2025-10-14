#include <stdio.h>

int main (){
    char estado [20], estado2 [20];
    char codigo [20], codigo2 [20];
    char cidade [20], cidade2 [20];
    int populaçao, populaçao2; 
    float area, area2; 
    float pib, pib2; 
    int pontos, pontos2; 

    printf("Carta 1: \n");

    printf("Digite o Estado:\n");
    scanf(" %[^\n]", estado);

    printf("Digite o código da carta:\n");
    scanf(" %[^\n]", codigo);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", cidade);

    printf("Digite o número da população:\n");
    scanf("%d", &populaçao);

    printf("Área:\n");
    scanf("%f", &area);

    printf("PIB:\n");
    scanf("%f", &pib);

    printf("Número de pontos turísticos:\n");
    scanf("%i", &pontos); 

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populaçao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de pontos turísticos: %i\n", pontos);

    printf("Carta 2: \n");

    printf("Digite o Estado: \n");
    scanf(" %[^\n]", estado2);

    printf("Digite o código da carta: \n");
    scanf(" %[^\n]", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite o número da população: \n");
    scanf("%i", &populaçao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: \n");
    scanf("%i", &pontos2); 

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %i \n", populaçao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de pontos turísticos: %i \n", pontos2);













    return 0; 
}