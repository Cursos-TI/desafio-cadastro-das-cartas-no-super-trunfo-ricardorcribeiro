#include <stdio.h>

int main()
{

    char estado1[20], codigoCarta1[20], nomeCidade1[20], estado2[20], codigoCarta2[20], nomeCidade2[20];
    int populacao1, populacao2, numeroPontosTuristicos1, numeroPontosTuristicos2, escolha;
    float area1, PIB1, area2, PIB2;

    printf("Digite o estado da primeira carta: \n");
    scanf("%s", estado1);
    printf("Digite o código da primeira carta: \n");
    scanf("%s", codigoCarta1);
    printf("Digite o nome da cidade da primeira carta: \n");
    scanf("%s", nomeCidade1);
    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da primeira cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &PIB1);
    printf("Digite o numero pontos turisticos da primeira cidade: \n");
    scanf("%d", &numeroPontosTuristicos1);

    printf("Digite o estado da segunda carta: \n");
    scanf("%s", estado2);
    printf("Digite o código da segunda carta: \n");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade da segunda carta: \n");
    scanf("%s", nomeCidade2);
    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &PIB2);
    printf("Digite o numero pontos turisticos da segunda cidade: \n");
    scanf("%d", &numeroPontosTuristicos2);

    escolha = 1;

    switch (escolha)
    {
    case 1:
        if (populacao1 > populacao2)
            printf("Carta 1 %s\n venceu!", nomeCidade1);
        else
            printf("Carta 2 %s\n venceu!", nomeCidade2);
        break;
    case 2:
        if (area1 > area2)
            printf("Carta 1 %s\n venceu!", nomeCidade1);
        else
            printf("Carta 2 %s\n venceu!", nomeCidade2);
        break;
    case 3:
        if (PIB1 > PIB2)
            printf("Carta 1 %s\n venceu!", nomeCidade1);
        else
            printf("Carta 2 %s\n venceu!", nomeCidade2);
        break;
    case 4:
        if (numeroPontosTuristicos1 > numeroPontosTuristicos2)
            printf("Carta 1 %s\n venceu!", nomeCidade1);
        else
            printf("Carta 2 %s\n venceu!", nomeCidade2);
        break;
    case 5:
        if ((PIB1 / populacao1) > (PIB2 / populacao2))
            printf("Carta 1 %s\n venceu!", nomeCidade1);
        else
            printf("Carta 2 %s\n venceu!", nomeCidade2);
        break;
    case 6:
        if ((populacao1 / area1) < (populacao2 / area2))
            printf("Carta 1 %s\n venceu!", nomeCidade1);
        else
            printf("Carta 2 %s\n venceu!", nomeCidade2);
        break;
    default:
        printf("Atributo inválido\n");
    }

    return 0;
}
