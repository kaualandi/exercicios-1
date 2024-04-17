#include "stdio.h"

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