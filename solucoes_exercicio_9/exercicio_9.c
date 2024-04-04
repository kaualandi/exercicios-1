#include "stdio.h"
#include "string.h"

int main()
{

  char string[100];
  int i, j, palavras = 0;
  size_t tam;

  printf("Digite uma string: ");
  scanf("%[^\n]s", string);

  tam = strlen(string);

  for (i = 0; i < tam; i++)
  {
    if (string[i] != ' ' && (string[i + 1] == ' ' || string[i + 1] == '\0'))
    {
      palavras++;
    }
  }

  printf("Foram encontradas %d palavras\n", palavras);

  return 0;
}