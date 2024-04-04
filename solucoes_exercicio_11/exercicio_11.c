#include <stdio.h>

int main()
{

  int n, i;

  while (1)
  {
    printf("Digite um número inteiro, caso queira encerrar, digite 0: \n");
    scanf("%d", &n);

    if (n == 0)
    {
      break;
    }

    int total = 0;

    for (i = 1; i <= n; i++)
    {
      total += i * i;
    }

    printf("Existem %d quadrados diferentes em um quadriculado de %d x %d quadrados.\n", total, n, n);
  };

  return 0;
}
