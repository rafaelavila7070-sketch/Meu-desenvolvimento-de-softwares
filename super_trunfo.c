#include <stdio.h>

int main() {
    // VARIÁVEIS CARTA 1
    char estado1[10], codigo1[5], nome1[20];
    unsigned long int populacao1;
    double area1, PIB1, densidade1, PIB_per_capita1, super_poder1;
    int NPT1;

    // VARIÁVEIS CARTA 2
    char estado2[10], codigo2[5], nome2[20];
    unsigned long int populacao2;
    double area2, PIB2, densidade2, PIB_per_capita2, super_poder2;
    int NPT2;

    // CADASTRO CARTA 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (ex: SP): ");
    scanf(" %9s", estado1);
    printf("Digite o codigo da carta: ");
    scanf(" %4s", codigo1);
    printf("Digite o nome da cidade (use _ para espaços): ");
    scanf(" %19s", nome1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (km²): ");
    scanf("%lf", &area1);
    printf("Digite o PIB: ");
    scanf("%lf", &PIB1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &NPT1);

    // Cálculos Carta 1
    densidade1 = (double)populacao1 / area1;
    PIB_per_capita1 = PIB1 / (double)populacao1;
    super_poder1 = (double)populacao1 + area1 + PIB1 + (double)NPT1 + PIB_per_capita1 + (1.0 / densidade1);

    //CADASTRO CARTA 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado: ");
    scanf(" %9s", estado2);
    printf("Digite o codigo da carta: ");
    scanf(" %4s", codigo2);
    printf("Digite o nome da cidade (use _ para espaços): ");
    scanf(" %19s", nome2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (km²): ");
    scanf("%lf", &area2);
    printf("Digite o PIB: ");
    scanf("%lf", &PIB2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &NPT2);

    // Cálculos Carta 2
    densidade2 = (double)populacao2 / area2;
    PIB_per_capita2 = PIB2 / (double)populacao2;
    super_poder2 = (double)populacao2 + area2 + PIB2 + (double)NPT2 + PIB_per_capita2 + (1.0 / densidade2);

    //EXIBIÇÃO DOS DADOS DAS CARTAS
    printf("\n DADOS DA CARTA 1");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nCidade: %s", nome1);
    printf("\nPopulação: %lu", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: R$ %.2f", PIB1);
    printf("\nPontos Turísticos: %d", NPT1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade1);
    printf("\nPIB per Capita: R$ %.2f", PIB_per_capita1);
    printf("\nSuper Poder: %.2f", super_poder1);
    

    printf("\n DADOS DA CARTA 2");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nCidade: %s", nome2);
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: R$ %.2f", PIB2);
    printf("\nPontos Turísticos: %d", NPT2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: R$ %.2f", PIB_per_capita2);
    printf("\nSuper Poder: %.2f", super_poder2);
    printf("\n-------------------------------------");

    
    //COMPARAÇÃO E RESULTADO FINAL
    printf("\n\n===== COMPARAÇÃO =====");
    printf("\nPopulação: %s venceu", (populacao1 > populacao2) ? nome1 : nome2);
    printf("\nÁrea: %s venceu", (area1 > area2) ? nome1 : nome2);
    printf("\nPIB: %s venceu", (PIB1 > PIB2) ? nome1 : nome2);
    printf("\nPontos Turísticos: %s venceu", (NPT1 > NPT2) ? nome1 : nome2);
    printf("\nDensidade Populacional (Menor vence): %s venceu", (densidade1 < densidade2) ? nome1 : nome2);
    printf("\nPIB per Capita: %s venceu", (PIB_per_capita1 > PIB_per_capita2) ? nome1 : nome2);
    printf("\nSuper Poder: %s venceu", (super_poder1 > super_poder2) ? nome1 : nome2);
    printf("\n=====================================\n");

    return 0;
}
