#include <stdio.h>

int main(){

/*soma (+)
  subtracao(-)
  multiplicao (*)
  divisao (/)
*/
  int numero1, numero2;
  int soma, subtracao, multiplicacao, divisao;

  printf("entre com o numero 1: \n");
  scanf("%d", &numero1);
  printf("entre com o numero 2: \n");
  scanf("%d", &numero2);

  //operação soma
  soma = numero1 + numero2;

  //opercao subtracao

  subtracao = numero1 - numero2;

  //operacao multiplicacao
  multiplicacao = numero1 * numero2;

  //operação divisao
  divisao = numero1 / numero2;
  
  printf("a Soma e: %d\n", soma);
  printf("a Subtracão e: %d\n", subtracao);
  printf("a Multiplicacão e: %d\n", multiplicacao);
  printf("a Divisão e: %d\n", divisao);



}