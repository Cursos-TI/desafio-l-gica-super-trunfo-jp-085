#include <stdio.h>

int main(){
    char estado01[20], codigo01[3], cidade01[20];
    int populacao01, ponto01; 
    float area01, pib01, densi_pop01, pib_per01;

    char estado02[20], codigo02[3], cidade02[20];
    int populacao02, ponto02; 
    float area02, pib02, densi_pop02, pib_per02;

    //A seguir vai ser a coleta de dados da carta 1
    printf("Digite os Dados da Carta 1\n ");
    printf("Nome do estado: ");
    scanf("%s", estado01);

    printf("Codigo da carta(letra do estado mais um número de 01 a 04): ");
    scanf("%s", codigo01);

    printf("Nome da cidade: ");
    scanf("%s", cidade01);

    printf("Tamanho da população: ");
    scanf("%d", &populacao01);

    printf("Área em km²: ");
    scanf(" %f", &area01 );

    printf("PIB da cidade: ");
    scanf(" %f", &pib01);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &ponto01);

    densi_pop01 = populacao01/area01; // Fazendo o calculo da densidade populacional da carta 1

    pib_per01 = (float)pib01*1000000000/populacao01;//Fazendo o calculo do PIB per Capita

    //Exibição da carta 1
    printf("-----Carta 1-----\n");
    printf("Estado: %s\n", estado01);
    printf("Codigo: %s\n", codigo01);
    printf("Nome da Cidade: %s\n",cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2f bilhões de reais\n", pib01);
    printf("Números de Pontos Turísticos: %d\n", ponto01);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_pop01);
    printf("PIB per Capita: %.2f reais \n", pib_per01);
    printf("-----------------\n");

    //Coleta de dados da carta 2
    printf("Digite os Dados da Carta 2\n ");
    printf("Nome do estado: ");
    scanf(" %s", estado02);

    printf("Codigo da carta(letra do estado mais um número de 01 a 04): ");
    scanf(" %s", codigo02);

    printf("Nome da cidade: ");
    scanf(" %s", cidade02);

    printf("Tamanho da população: ");
    scanf("%d", &populacao02);

    printf("Área em km²: ");
    scanf("%f", &area02 );

    printf("PIB da cidade: ");
    scanf("%f", &pib02);

    printf("Quantidade de pontos turísticos: ");
    scanf("%d", &ponto02);

    densi_pop02 = populacao02/ area02;//Calculando a densidade populacional da carta 2
    pib_per02 = (float) pib02*1000000000/ populacao02;//Calculando o PIB per Capita da carta 2

    // Exibiçao dos dados da carta 2
    printf("-----Carta 2-----\n");
    printf("Estado: %s\n", estado02);
    printf("Codigo: %s\n", codigo02);
    printf("Nome da Cidade: %s\n",cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2f bilhões de reais\n", pib02);
    printf("Números de Pontos Turísticos: %d\n", ponto02);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_pop02);
    printf("PIB per Capita: %.2f reais \n", pib_per02);
    printf("-----------------\n");

        //Calculando o super poder
    float poder01 = (float)populacao01 + area01 + (pib01*1000000000) + pib_per01 + (1/densi_pop01 )+ (float)ponto01;
    float poder02 = (float)populacao02 + area02 + (pib02*1000000000) + pib_per02 + (1/densi_pop02) + (float)ponto02;

    //Exibição do super poder
    printf("Super poder carta 1: %.2f\n", poder01);
    printf("Super poder carta 2: %.2f\n", poder02);
    printf("-----------------\n");

    //fazendo a comparação das cartas
    printf("-----Comparação de cartas------\n");
    printf("POPULAÇÃO\n");
    printf("Carta 01 com: %d\n", populacao01);
    printf("Carta 02 com: %d\n", populacao02);
    if (populacao01 > populacao02){
        printf("A carta 01 venceu!\n");
    }
    else{
        printf("A carta 02 venceu!\n");
    }
    
    printf("  ÁREA\n");
    printf("Carta 01 com: %.2f\n", area01);
    printf("Carta 02 com: %.2f\n", area02);
    if (area01 > area02){
        printf("A carta 01 venceu!\n");
    }
    else{
        printf("A carta 02 venceu!\n");
    }
    
    printf("  PIB\n");
    printf("Carta 01 com: %.2f\n", pib01);
    printf("Carta 02 com: %.2f\n", pib02);
    if (pib01 > pib02){
        printf("A carta 01 venceu!\n");
    }
    else{
        printf("A carta 02 venceu!\n");
    }
    
    printf("  Pontos Turísticos\n");
    printf("Carta 01 com: %d\n", ponto01);
    printf("Carta 02 com: %d\n", ponto02);
    if (ponto01 > ponto02){
        printf("A carta 01 venceu!\n");
    }
    else{
        printf("A carta 02 venceu!\n");
    }

    printf("  DENSIDADE POPULACIONAL\n");
    printf("Carta 01 com: %.2f\n", densi_pop01);
    printf("Carta 02 com: %.2f\n", densi_pop02);
    if (densi_pop01 < densi_pop02){
        printf("A carta 01 venceu!\n");
    }
    else{
        printf("A carta 02 venceu!\n");
    }

    printf("  PIB per Capita\n");
    printf("Carta 01 com: %.2f\n", pib_per01);
    printf("Carta 02 com: %.2f\n", pib_per02);
    if (pib_per01 > pib02){
        printf("A carta 01 venceu!\n");
    }
    else{
        printf("A carta 02 venceu!\n");
    }

    printf("  SUPER PODER\n");
    printf("Carta 01 com: %.2f\n", poder01);
    printf("Carta 02 com: %.2f\n", poder02);
    if (poder01 > poder02){
        printf("A carta 01 venceu!\n");
    }
    else{
        printf("A carta 02 venceu!\n");
    }



    
}