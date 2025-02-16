#include <stdio.h>

int main(){

    char estado = 'A';
    char codigodacarta [10] = "01";
    char nomedacidade [20] = "São Paulo";
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf("*** CARTA BRASIL ***\n");

    printf("Estado:%c\n", estado);
    printf("Código da carta:%c%s\n", estado, codigodacarta);
    printf("Nome da Cidade:%s\n", nomedacidade);
    printf("População:%i bilhões de Pessoas\n", populacao);
    printf("Àrea em km²:%f km²\n", area);
    printf("PIB:%i Biihões de reais\n", pib);
    printf("Numeros de pontos turisticos:%d \n", turisticos);

    return 0;
}