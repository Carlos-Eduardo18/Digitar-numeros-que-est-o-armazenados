#include <stdio.h>
#include <stdlib.h>

int main() {
  int vetor[5] = {10, 20, 30, 40, 50};
  int num, encontrado = 0;
  int i = 0;

  printf("Digite um número para ver se esta no vetor:");
  scanf("%d", &num);

  do {
    if (vetor[i] == num) {
      encontrado = 1;
      break;
    }
    i++;
  } while (i < 5);
  if (encontrado) {
    printf("O número %d está presente", num);
  } else {
    printf("O número %d não está presente", num);
  }
}