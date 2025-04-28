#include <stdio.h>

int main(){
    char estadoA[20];
    char estadoB[20];
    char cidadeA[30];
    char cidadeB[30];
    char codigo_cartaA[4];
    char codigo_cartaB[4];
    int populacaoA;
    int populacaoB;
    int pontosTuristicosA;
    int pontosTuristicosB;
    float areaKmA;
    float areaKmB;
    float pibA;
    float pibB;
    float densidadePopulacionalA;
    float densidadePopulacionalB;
    float superPoderA;
    float superPoderB;

    float combinacaoCarta = superPoderA > superPoderB;


    printf(" *** Super Trunfo ***\n");
    printf("Digite o estado: \n");
    scanf("%s", &estadoA);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_cartaA);

    printf("Digite a cidade: \n");
    scanf("%s", &cidadeA);

    printf("Digite a população: \n");
    scanf("%i", &populacaoA);

    printf("O tamanho da cidade é: \n");
    scanf("%i", &areaKmA);

    printf("A densidade populacional é: \n");
    scanf("%f", &densidadePopulacionalA);

    printf("A PIB percapta é: \n");
    scanf("%f", &pibA);

    printf("Pontos turísticos: \n");
    scanf("%i", &pontosTuristicosA);

    printf("O Super Poder da carta é: \n");
    scanf("%f", &superPoderA);

    printf("Digite o estado: \n");
    scanf("%s", &estadoB);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo_cartaB);

    printf("Digite a cidade: \n");
    scanf("%s", &cidadeB);

    printf("Digite a população: \n");
    scanf("%i", &populacaoB);

    printf("O tamanho da cidade é: \n");
    scanf("%i", &areaKmB);

    printf("A densidade populacional é: \n");
    scanf("%f", &densidadePopulacionalB);

    printf("A PIB percapta é: \n");
    scanf("%f", &pibB);

    printf("Pontos turísticos: \n");
    scanf("%i", &pontosTuristicosB);

    printf("O Super Poder da carta é: \n");
    scanf("%f", &superPoderB);


    printf("O código da carta é %s, a sigla do estado é %s, a cidade é %s, o número de habitantes é %i, a cidade possui %i pontos turísticos\n", 
        codigo_cartaA, estadoA, cidadeA, populacaoA, pontosTuristicosA);

    printf("A densidade populacional é de %f, o PIB per capita é de %f, o superpoder da carta é %f\n",
            densidadePopulacionalA, pibA, superPoderA);

    printf("O código da carta é %s, a sigla do estado é %s, a cidade é %s, o número de habitantes é %i, a cidade possui %i pontos turísticos\n", 
                codigo_cartaB, estadoB, cidadeB, populacaoB, pontosTuristicosB);
        
    printf("A densidade populacional é de %f, o PIB per capita é de %f, o superpoder da carta é %f\n",
                    densidadePopulacionalB, pibB, superPoderB);

    printf("O super poder da carta A é %.2f, o super poder da carta b é %.2f, A carta A ganha da carta B? %d\n", 
        superPoderA, superPoderB, superPoderA > superPoderB);

    return 0;

}