#include "stdio.h"

// Desenvolva um programa em C que permita ao usuário informar um número inteiro N > 0. Em seguida, o usuário deverá digitar N números inteiros, que deverão ser armazenados em um array. Por fim, o programa deverá ordenar o array em ordem crescente e exibi-lo ao usuário. Os números deverão ser exibidos em uma mesma linha, com a separação de um espaço entre eles.

int main()
{

  int n, i, j, temp;

  printf("A quantidade de números que terá: ");
  scanf("%d", &n);

  int array[n];

  for (i = 0; i < n; i++)
  {
    printf("Digite o %dº número inteiro: ", i + 1);
    scanf("%d", &array[i]);
  }

  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (array[i] > array[j])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  for (i = 0; i < n; i++)
  {
    printf("%d ", array[i]);
  }

  return 0;
}