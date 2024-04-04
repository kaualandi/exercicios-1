#include "stdio.h"

// Desenvolva um programa em C que permita ao usuário informar um número inteiro N > 0. Em seguida, o usuário deverá digitar N números inteiros, que deverão ser armazenados em um array. Após, o programa deverá calcular a mediana dos valores do array. Para calcular corretamente a mediana, é preciso verificar se (i) o array está ordenado de forma crescente (utilize a solução do Exercício 3); e (ii) se N é par ou ímpar. Ao final, exiba uma mensagem no terminal informando a mediana referente ao array digitado pelo usuário.

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

  float mediana;

  if (n % 2 == 0)
  {
    mediana = (array[n / 2 - 1] + array[n / 2]) / 2.0;
  }
  else
  {
    mediana = array[n / 2];
  }

  printf("A mediana dos números é: %.2f\n", mediana);

  return 0;
}