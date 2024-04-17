#include "stdio.h"

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