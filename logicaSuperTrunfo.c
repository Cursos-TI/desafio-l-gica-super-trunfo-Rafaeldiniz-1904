#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Cadastro das variáveis.

  char estado1 = 'A', estado2 = 'B';
  char codigodacarta1 [4] = "01", codigodacarta2[4] = "02";
  char nomedacidade1 [20] = "São Paulo", nomedacidade2 [20] = "Rio de Janeiro";
  int populacao1 = 5250, populacao2 = 2150;
  float area1 = 88.22, area2 = 77.5;
  float pib1 = 11111.22, pib2 = 33333.11;
  int pontoturistico1 = 10, pontoturistico2 = 20;


     //Dencidade populacional e Pib percapita.

  float dencidadepopulacional1 = populacao1 / area1, pibpercapita1 = pib1 / populacao1;  
  float dencidadepopulacional2 = populacao2 / area2, pibpercapita2 = pib2 / populacao2;

     // Cadastro do printf das cartas.

    printf("Estado: %c\nCódigo da carta: %c%s\nNome da Cidade: %s\nPopulação: %d Bilhões de pessoas\nArea: %.2f Km²\nPIB: %.2f Bilhões de reais\nPontos Turísticos: %d\n", estado1, estado1, codigodacarta1, nomedacidade1, populacao1, area1, pib1, pontoturistico1);
    printf("Dencidade Populacional: %.1f Pessoas po Km²\nPIB Per capita: %.1f PIB por pessoa\n", dencidadepopulacional1, pibpercapita1);
    printf("\n");

    
    printf("Estado: %c\nCódigo da carta: %c%s\nNome da Cidade: %s\nPopulação: %d Bilhões de pessoas\nArea: %.2f Km²\nPIB: %.2f Bilhões de reais\nPontos Turísticos: %d\n", estado2, estado2, codigodacarta2, nomedacidade2, populacao2, area2, pib2, pontoturistico2);
    printf("Dencidade Populacional: %.1f Pessoas por Km²\nPIB Per capita: %.1f PIB por pessoa\n", dencidadepopulacional2, pibpercapita2);
    printf("\n");
    
    
   // Comparação de cartas.


   printf("*** Comparação de carta ***\n");
   
   printf("\n");

     // Caso a carta tenha uma area km² > sera a vencedora.
     // Mas caso a outra carta tenha a Dencidade da População < a carta sera vencedora.

     
    if (area1 > area2)if (dencidadepopulacional1 < dencidadepopulacional2){
      printf("Carta 1: %s:%f Area em KM²\n", nomedacidade1, area1);
      printf("Carta 2: %s:%f Area em Km²\n", nomedacidade2, area1);
      printf("Carta 1 %s Venceu\n",nomedacidade1);
    } else {
      printf("Carta 1: %s: %f Area em Km²\n", nomedacidade1, area1);
      printf("Carta 2: %s: %f Area em Km²\n", nomedacidade2, area2);
      printf("Carta 2 %s Venceu\n", nomedacidade2);
    }

      printf("\n");

    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
