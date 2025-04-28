#include <stdio.h>

int main(){
    char estadoA[20], estadoB[20];
    char cidadeA[30], cidadeB[30];
    char codigo_cartaA[4], codigo_cartaB[4];
    int populacaoA;    
    int populacaoB;
    int pontosTuristicosA;
    int pontosTuristicosB;
    float areaKmA;
    float areaKmB;
    float pibA;
    float pibB;
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

    printf("Digite o PIB: \n");
    scanf("%f", &pibA);

    printf("O tamanho da cidade é: \n");
    scanf("%f", &areaKmA);

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

    printf("Digite o PIB: \n");
    scanf("%f", &pibB);

    printf("O tamanho da cidade é: \n");
    scanf("%f", &areaKmB);

    printf("Pontos turísticos: \n");
    scanf("%i", &pontosTuristicosB);

    printf("O Super Poder da carta é: \n");
    scanf("%f", &superPoderB);

    float pop_convA = (float)populacaoA; // conversão de int para float
    float densidadePopulacionalA = pop_convA / areaKmA; // efetuando a divisão com a população convertida
    float pibpercaptaA = pibA / pop_convA;
    float pop_convB = (float)populacaoB; // conversão de int para float
    float pibpercaptab = pibB / pop_convB; // efetuando a divisão com a população convertida
    float densidadePopulacionalB = pop_convB / areaKmB;


    printf("O código da carta é %s, a sigla do estado é %s, a cidade é %s, o número de habitantes é %i, a cidade possui %i pontos turísticos\n", 
        codigo_cartaA, estadoA, cidadeA, populacaoA, pontosTuristicosA);

    printf("A densidade populacional é de %f, o PIB per capita é de %f, o superpoder da carta é %f\n",
            densidadePopulacionalA, pibpercaptaA, superPoderA);

    printf("O código da carta é %s, a sigla do estado é %s, a cidade é %s, o número de habitantes é %i, a cidade possui %i pontos turísticos\n", 
                codigo_cartaB, estadoB, cidadeB, populacaoB, pontosTuristicosB);
        
    printf("A densidade populacional é de %f, o PIB per capita é de %f, o superpoder da carta é %f\n",
                    densidadePopulacionalB, pibpercaptab, superPoderB);

    printf("O super poder da carta A é %.2f, o super poder da carta b é %.2f, A carta A ganha da carta B? %d\n", 
        superPoderA, superPoderB, superPoderA > superPoderB);

    if (areaKmA > areaKmB){
        printf("%s ganhou em área!\n", cidadeA);
    }else{
        printf("%s ganhou em área!\n", cidadeB);
    }

    if (densidadePopulacionalA < densidadePopulacionalB){
        printf("%s ganhou com densidade populacional menor", cidadeA);
    }else{
        printf("%s ganhou com a densidade populacional menor", cidadeB);
    }

    if (pontosTuristicosA > pontosTuristicosB){
        printf("%s ganhou com mais pontos turísticos!", cidadeA);
    }else{
        printf("%s ganhou com mais pontos turísticos!", cidadeB)
    }

    if (populacaoA > populacaoB){
        printf("%s ganhou em quantidade populacional!\n", cidadeA);
    }else{
        printf("%s ganhou em quantidade populacional!\n", cidadeB);
    }

    return 0;

}