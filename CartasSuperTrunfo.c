#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1[10];
    char codigo1[10];
    char cidade1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontoturistico1;

    printf("\n ---Primeira carta---\n");

    printf("Digite o estado: ");
    scanf("%s", &estado1);

    printf("Digite o código: ");
    scanf("%s",&codigo1);

    printf("Digite a cidade: ");
    scanf("%s",&cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite os ponto turistico: ");
    scanf("%d" , &pontoturistico1);

    printf("\n--- Dados Informados ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %f\n" , pib1);

    // Declaração das variáveis para a segunda carta

    printf("\n ---Segunda carta--- \n");
    char estado2[10];
    char codigo2[10];
    char cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;

    printf("Digite o estado: ");
    scanf("%s" , &estado2);

    printf("Digite o código: ");
    scanf("%s", &codigo2);

    printf("Digite a cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite ponto turistico: ");
    scanf("%d" , &pontoturistico2);

    printf("\n--- Dados Informados ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %f\n" , pib2);
    printf("Ponto turistico: %d\n" , pontoturistico2);

    return 0; // Indica que o programa foi executado com sucesso.
}
