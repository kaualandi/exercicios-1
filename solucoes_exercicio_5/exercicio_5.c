#include "stdio.h"

// Desenvolva um programa em C que permita ao usuário informar um número inteiro N > 0. Em seguida, o usuário deverá digitar N números inteiros, que deverão ser armazenados em um array. A seguir, o programa deverá contar a ocorrência de cada elemento presente no array. Como exemplo, tome a seguinte entrada: N = 10, array = [2, 3, 5, 4, 2, 7, 2, 1, 0, 3]. O programa deverá exibir a seguinte saída:
// Ocorrencias de cada elemento de array:
// 2: 3 ocorrencias
// 3: 2 ocorrencias
// 5: 1 ocorrencias
// 4: 1 ocorrencias
// 7: 1 ocorrencias
// 1: 1 ocorrencias
// 0: 1 ocorrencias
// CASO JÁ TENHA EXIBIDO A QUANTIDADE DE VEZES QUE ELE APARECEU, NÃO EXIBIR NOVAMENTE

int main()
{
  int n;
  printf("Digite o tamanho do array: ");
  scanf("%d", &n);

  int array[n];
  for (int i = 0; i < n; i++)
  {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &array[i]);
  }

  int ocorrencias[n];

  printf("Ocorrencias de cada elemento de array:\n");

  for (int i = 0; i < n; i++)
  {
    ocorrencias[i] = 0;
    for (int j = 0; j < n; j++)
    {
      if (array[i] == array[j])
      {
        ocorrencias[i]++;
      }
    }
    int k;
    for (k = 0; k < i; k++)
    {
      if (array[i] == array[k])
      {
        break;
      }
    }

    if (i == k)
    {
      printf("%d: %d ocorrencias\n", array[i], ocorrencias[i]);
    }
  }

  return 0;
}