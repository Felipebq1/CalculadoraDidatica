/*
* Calculadora Programador Didática
* Autor: [Felipe Bandeira Queiroz]
* Data: [24/08/2024]
* Revisões:
* - [24, 13:40] - [implementação da conversão para base 2]
* - [26, 09:46] - implementação da conversão para base 8]
*/

#include <stdio.h>
#include <stdlib.h>

void decimalParaBinario(int numero) {
  int binario[32];
  int resto = 0;
  
  printf("\nConversão Decimal -> Binário:\n");
  while (numero > 0) {
    binario[resto] = numero % 2;
    printf("Dividindo %d por 2, Resto: %d\n", numero, binario[resto]);
    numero = numero / 2;
    resto++;
  }
  
  printf("Número binário: ");
  for (int i = resto - 1; i >= 0; i--) {
    printf("%d", binario[i]);
  }
  printf("\n");
}

void decimalParaBase8(int numero){
  int octal[32];
  int resto = 0;

  printf("\nConversão Decimal -> Base 8:\n");
  while(numero > 0){
    octal[resto] = numero % 8;
    printf("Dividindo %d por 8, Resto: %d\n",numero, octal[resto]);
    numero = numero / 8;
    resto++;
  }
  printf("Número base 8: ");
  for (int i = resto - 1; i >= 0; i--) {
    printf("%d", octal[i]);
  }
  printf("\n");
}

int main() {
  int opcao, numero;
  
  while (1) {
    printf("\nCalculadora Didática\n");
    printf("1 - Converter de Base 10 para Base 2\n");
    printf("2 - Converter de Base 10 para Base 8\n");
    printf("3 - Converter de Base 10 para Base 16\n");
    printf("4 - Converter de Base 10 para Código BCD\n");
    printf("5 - Converter de Base 10 para Complemento a 2 (16 bits)\n");
    printf("6 - Converter Real em Decimal para Float e Double\n");
    printf("7 - Sair\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao == 7) {
      printf("Calculadora encerrada.\n");
      break;
    }
  
    printf("Digite o número na base 10: ");
    scanf("%d", &numero);

    if (opcao == 1) {
      decimalParaBinario(numero);
    }else if(opcao == 2){
      decimalParaBase8(numero);
    }
  }
  return 0;
}