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

    // Variáveis para os Menus e Lógica de Comparação
    int opcao1, opcao2;
    double valor1_at1, valor2_at1, valor1_at2, valor2_at2;
    double pontos1, pontos2;

    // CADASTRO CARTA 1 (Mantido conforme original)
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado: "); scanf(" %9s", estado1);
    printf("Digite o codigo: "); scanf(" %4s", codigo1);
    printf("Digite a cidade: "); scanf(" %19s", nome1);
    printf("Populacao: "); scanf("%lu", &populacao1);
    printf("Area (km²): "); scanf("%lf", &area1);
    printf("PIB: "); scanf("%lf", &PIB1);
    printf("Pontos Turisticos: "); scanf("%d", &NPT1);

    densidade1 = (double)populacao1 / area1;
    PIB_per_capita1 = PIB1 / (double)populacao1;

    // CADASTRO CARTA 2 (Mantido conforme original)
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado: "); scanf(" %9s", estado2);
    printf("Digite o codigo: "); scanf(" %4s", codigo2);
    printf("Digite a cidade: "); scanf(" %19s", nome2);
    printf("Populacao: "); scanf("%lu", &populacao2);
    printf("Area (km²): "); scanf("%lf", &area2);
    printf("PIB: "); scanf("%lf", &PIB2);
    printf("Pontos Turisticos: "); scanf("%d", &NPT2);

    densidade2 = (double)populacao2 / area2;
    PIB_per_capita2 = PIB2 / (double)populacao2;

    // --- MENU 1 ---
    printf("\n=============================\n");
    printf("      PRIMEIRO ATRIBUTO      \n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    // --- MENU 2 DINÂMICO ---
    printf("\n=============================\n");
    printf("      SEGUNDO ATRIBUTO       \n");
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demografica\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    // LÓGICA DE ATRIBUIÇÃO E COMPARAÇÃO
    // Atributo 1
    switch (opcao1) {
        case 1: valor1_at1 = (double)populacao1; valor2_at1 = (double)populacao2; break;
        case 2: valor1_at1 = area1; valor2_at1 = area2; break;
        case 3: valor1_at1 = PIB1; valor2_at1 = PIB2; break;
        case 4: valor1_at1 = (double)NPT1; valor2_at1 = (double)NPT2; break;
        case 5: valor1_at1 = densidade1; valor2_at1 = densidade2; break;
    }

    // Atributo 2
    switch (opcao2) {
        case 1: valor1_at2 = (double)populacao1; valor2_at2 = (double)populacao2; break;
        case 2: valor1_at2 = area1; valor2_at2 = area2; break;
        case 3: valor1_at2 = PIB1; valor2_at2 = PIB2; break;
        case 4: valor1_at2 = (double)NPT1; valor2_at2 = (double)NPT2; break;
        case 5: valor1_at2 = densidade1; valor2_at2 = densidade2; break;
    }

    // Cálculo da Soma (Com regra especial para densidade: menor valor = mais pontos)
    pontos1 = (opcao1 == 5 ? (1.0/valor1_at1) : valor1_at1) + (opcao2 == 5 ? (1.0/valor1_at2) : valor1_at2);
    pontos2 = (opcao1 == 5 ? (1.0/valor2_at1) : valor2_at1) + (opcao2 == 5 ? (1.0/valor2_at2) : valor2_at2);

    // --- EXIBIÇÃO DO RESULTADO FINAL ---
    printf("\n--- RESULTADO DA COMPARAÇÃO ---\n");
    printf("Cidade 1: %s | Cidade 2: %s\n", nome1, nome2);
    printf("Atributo 1 (Opcao %d): %.2f vs %.2f\n", opcao1, valor1_at1, valor2_at1);
    printf("Atributo 2 (Opcao %d): %.2f vs %.2f\n", opcao2, valor1_at2, valor2_at2);
    printf("Soma Total de Pontos: %.2f vs %.2f\n", pontos1, pontos2);
    printf("-------------------------------\n");

    if (pontos1 > pontos2) {
        printf("VENCEDOR FINAL: CARTA 1 (%s)!\n", nome1);
    } else if (pontos2 > pontos1) {
        printf("VENCEDOR FINAL: CARTA 2 (%s)!\n", nome2);
    } else {
        printf("EMPATE!\n");
    }

    return 0;
}
