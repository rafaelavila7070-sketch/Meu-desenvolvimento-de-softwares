#include <stdio.h>

int main(){
    char estado[10];
    char codigo[5];
    char nome[20]; 
    float populacao;
    float area;
    float PIB;
    int NPT;
    float densidade_populacional;
    float PIB_per_capita;

//CARTA 1 
//DIGITE O NOME DA CIDADE 2 COM ANDERLAINES (_)

    printf("Cadastre a carta 1\n");

    printf("Digite o estado: \n");
    fgets(estado,10,stdin);

    printf("Digite o código da carta: \n");
    fgets(codigo,5,stdin);

//DIGITE O NOME DA CIDADE 2 COM ANDERLAINES (_)
//COMO A VARIÁVEL %S NÃO LÊ ESPAÇOS VAZIOS, DECIDI QUE SERIA MELHOR INCLUIR O NOME DAS CIADES COM ANDERLAINES "_" PARA NÃO FICAR DIFERENTE AS DUAS CARTAS. 
    printf("Digite a cidade com anderlaines: \n");
    scanf("%s",&nome);

    printf("Digite a população: \n");
    scanf("%f", &populacao);

    printf("Digite a área(em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB(Em R$): \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &NPT);

    densidade_populacional = populacao / area;
    PIB_per_capita = populacao / PIB;

//resultados da carta 1 
    printf("\nCarta 1\n");
    printf("Estado: %s", estado);
    printf("Código da Carta: %s", codigo);
    printf("Nome da cidade: %s", nome);
    printf("População: %f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", NPT);

    printf("A Densidade Populacional (População / Área) é: %.2f hab/km²\n", densidade_populacional);
    printf("O PIB per Capita (PIB / População) é: %.2f reais\n", PIB_per_capita);



//CARTA 2   
    printf("\nCadastre a carta 2\n");

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);

//DIGITE O NOME DA CIDADE 2 COM ANDERLAINES (_)
    printf("Digite a cidade com anderlaines: \n");
    scanf("%s", &nome);

    printf("Digite a população: \n");
    scanf("%f", &populacao);

    printf("Digite a área(em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB(Em R$): \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &NPT);

    densidade_populacional = populacao / area;
    PIB_per_capita = populacao / PIB;

//resultados da carta 2
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turísticos: %d\n", NPT);

    printf("A Densidade Populacional (População / Área) é: %.2f hab/km²\n", densidade_populacional);
    printf("O PIB per Capita (PIB / População) é: %.2f reais\n", PIB_per_capita);


return 0;

}
