#include <stdio.h>

int main(){

    // ESTADOS DE A - H (LETRAS REPRESENTANDO ESTADOS)
    char estado1 = 'A', estado2 = 'B', estado3 = 'C', estado4 = 'D', estado5 = 'E', estado6 = 'F', estado7 = 'G', estado8 = 'H';

    // CODIGOS DA CARTA DE 1 - 4 (NUMEROS REPRESENTANDO CDADES DO ESTADO)
    char codigodacarta1 [10] = "01", codigodacarta2 [10] = "02", codigodacarta3 [10] = "03", codigodacarta4 [10] = "04";

    // NOMES DA CIDADES
    char nomedacidade1 [20] = "São Paulo", nomedacidade2 [20] = "Guarulhos", nomedacidade3 [20] = "Campinas", nomedacidade4 [10] = "Sorocaba";

    // POPULACAO
    int populacao1 = 10, populacao2 = 20, populacao3 = 30, populacao4 = 40;

    // AREA EM KM²
    float area1 = 100, area2 = 200, area3 = 300, area4 = 400;

    // PIB
    float pib1 = 1000, pib2 = 2000, pib3 = 3000, pib4 = 4000;

    // PONTOS TURISTICOS
    int turisticos1 = 5, turisticos2 = 2, turisticos3 = 9, turisticos4 = 4;

    printf("*** CARTAS BRASIL ***\n");
    
    printf("\n");

    printf("Estado:%c\n", estado1);
    printf("Código da carta:%c%s\n", estado1, codigodacarta1);
    printf("Nome da Cidade:%s\n", nomedacidade1);
    printf("População:%i bilhões de Pessoas\n", populacao1);
    printf("Àrea em km²:%f km²\n", area1);
    printf("PIB:%i Biihões de reais\n", pib1);
    printf("Numeros de pontos turisticos:%d \n", turisticos1);

    printf("\n");

    printf("Estado:%c\n", estado1);
    printf("Código da carta:%c%s\n", estado1, codigodacarta2);
    printf("Nome da Cidade:%s\n", nomedacidade2);
    printf("População:%i bilhões de Pessoas\n", populacao2);
    printf("Àrea em km²:%f km²\n", area2);
    printf("PIB:%i Biihões de reais\n", pib2);
    printf("Numeros de pontos turisticos:%d \n", turisticos2);

    printf("\n");

    printf("Estado:%c\n", estado1);
    printf("Código da carta:%c%s\n", estado1, codigodacarta3);
    printf("Nome da Cidade:%s\n", nomedacidade3);
    printf("População:%i bilhões de Pessoas\n", populacao3);
    printf("Àrea em km²:%f km²\n", area3);
    printf("PIB:%i Biihões de reais\n", pib3);
    printf("Numeros de pontos turisticos:%d \n", turisticos3);

    printf("\n");

    printf("Estado:%c\n", estado1);
    printf("Código da carta:%c%s\n", estado1, codigodacarta1);
    printf("Nome da Cidade:%s\n", nomedacidade4);
    printf("População:%i bilhões de Pessoas\n", populacao4);
    printf("Àrea em km²:%f km²\n", area4);
    printf("PIB:%i Biihões de reais\n", pib4);
    printf("Numeros de pontos turisticos:%d \n", turisticos4);

    return 0;
}