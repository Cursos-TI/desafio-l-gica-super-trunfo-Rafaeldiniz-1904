#include <stdio.h>

int main(){

    int numero1 = 10;
    int numero2 = 50;
    int soma, subtracao, multiplicacao, divisao;

    // OPERADORES DE ARITMETICA

  //operação soma
  soma = numero1 + numero2;

  //operecao subtracao

  subtracao = numero1 - numero2;

  //operação multiplicacao
  multiplicacao = numero1 * numero2;

  //operação divisao
  divisao = numero2 / numero1;
    // OPERADORES DE ATRIBUIÇÃO

  numero1 += 40;
  numero2 -= 20;

  //OPERADORES DE INCREMENTO E DECREMENTO

  numero1++;
  numero2--;

  // Exibição dos resultados
  printf("Soma: %d\n", soma);
  printf("Subtração: %d\n", subtracao);
  printf("Multiplicação: %d\n", multiplicacao);
  printf("Divisão: %d\n", divisao);
  printf("Novo valor de numero1: (após += 40 e ++): %d\n", numero1);
  printf("Novo valor de numero2: (após *= 20 e --): %d\n", numero2);

  
  return 0;
}