#include "stdio.h"

int main()
{

  int n;
  int binario[32];
  int i = 0;

  do
  {
    printf("Digite um número inteiro maior que zero para transformar em binário, caso contrário, o programa se encerrará: ");
    scanf("%d", &n);

    if (n < 0)
    {
      break;
    }

    while (n > 0)
    {
      binario[i] = n % 2;
      n = n / 2;
      i++;
    }

    printf("O número em binário é: ");
    for (int j = i - 1; j >= 0; j--)
    {
      printf("%d", binario[j]);
    }
    printf("\n");

    i = 0;

  } while (n >= 0);

  return 0;
}