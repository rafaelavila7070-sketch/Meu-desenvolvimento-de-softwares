#include <stdio.h>

int main(){
    char estado[10];
    char codigo[10];
    char nome[50]; 
    float populacao;
    float area;
    float PIB;
    int NPT;
    float densidade_populacional;
    float PIB_per_capita;


//CARTA 1 
printf("--Carta 1-- \n");

printf("Digite o estado: \n");
fgets(estado,10,stdin);


printf("Digite o código da carta: \n");
fgets(codigo,10,stdin);


printf("Digite o nome da cidade: \n");
fgets(nome,50,stdin);


printf("Digite a população: \n");
scanf("%f", &populacao);


printf("Digite a área(em km²): \n");
scanf("%f", &area);


printf("Digite o PIB(Em R$): \n");
scanf("%f", &PIB);


printf("Digite o número de pontos turísticos: \n");
scanf("%d", &NPT);

densidade_populacional = populacao / area;
PIB_per_capita = populacao / PIB;

//resultados da carta 1 
printf("\n--- Carta 1 ---\n");
printf("Estado: %s", estado);
printf("Código da Carta: %s", codigo);
printf("Nome da cidade: %s", nome);
printf("População: %.0f\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f\n", PIB);
printf("Número de pontos turísticos: %d\n", NPT);

printf("A Densidade Populacional (População / Área) é: %.2f hab/km²\n", densidade_populacional);
printf("O PIB per Capita (PIB / População) é: %.2f reais\n", PIB_per_capita);


//CARTA 2   
printf("\n--Carta 2--\n");


printf("Digite o estado: \n");
fgets(estado,10,stdin);


printf("Digite o código da carta: \n");
fgets(codigo,10,stdin);


printf("Digite o nome da cidade: \n");
fgets(nome,50,stdin);


printf("Digite a população: \n");
scanf("%f", &populacao);


printf("Digite a área(em km²): \n");
scanf("%f", &area);


printf("Digite o PIB(Em R$): \n");
scanf("%f", &PIB);


printf("Digite o número de pontos turísticos: \n");
scanf("%d", &NPT);


densidade_populacional = populacao / area;
PIB_per_capita = populacao / PIB;

// resultados da carta 2
printf("\n--- Carta 2 ---\n");
printf("Estado: %s", estado);
printf("Código da Carta: %s", codigo);
printf("Nome da cidade: %s", nome);
printf("População: %.0f\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f\n", PIB);
printf("Número de pontos turísticos: %d\n", NPT);

printf("A Densidade Populacional (População / Área) é: %.2f hab/km²\n", densidade_populacional);
printf("O PIB per Capita (PIB / População) é: %.2f reais\n", PIB_per_capita);

return 0;

}

