#include <stdio.h>
//Crie um programa que tenha uma função soma e a função main. A função main deve ler dois valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A Função main deve imprimir o resultado da soma

int soma(int numero1, int numero2);
int main(){
  int valorA, valorB, resultado;
  printf("Digite dois numeros para somar:\nNumero 1: ");
  scanf("%d", &valorA);
  printf("Numero 2: ");
  scanf("%d", &valorB);
  
  resultado = soma(valorA, valorB);
  printf("Soma: %d", resultado);
  
}
int soma(int numero1, int numero2){
  return numero1 + numero2;
}