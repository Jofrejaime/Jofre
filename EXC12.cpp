#include <stdio.h>
//numeros polindromos
int main() {
  int numero, aux, troca;   
  printf("Digite um numero de 5 digitos: ");
  scanf("%d", &numero);

  
  aux = numero;
  troca = 0;

  while (aux != 0) {
    troca = troca * 10 + aux % 10;  
    aux = aux / 10;                   
  }

  if (troca == numero)
    printf("O numero e palindromo\n");
  else
    printf("o numero nao e palindromo\n");

  return 0;
}

              
      