
#include "stdio.h"
#include "string.h"

int main()
{

  char string[100];
  int i, j, palindromo = 1;
  size_t tam;

  printf("Digite uma string: ");
  scanf("%s", string);

  tam = strlen(string);

  for (i = 0, j = tam - 1; i < tam / 2; i++, j--)
  {
    if (string[i] != string[j])
    {
      palindromo = 0;
      break;
    }
  }

  if (palindromo)
  {
    printf("A string %s é um palindromo\n", string);
  }
  else
  {
    printf("A string %s nao é um palindromo\n", string);
  }

  return 0;
}