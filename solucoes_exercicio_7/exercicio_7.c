#include "stdio.h"

int main()
{

  char str1[100], str2[100];
  int i, j, ocorrencias1[256] = {0}, ocorrencias2[256] = {0};

  printf("Digite a primeira string: ");
  scanf("%s", str1);

  printf("Digite a segunda string: ");
  scanf("%s", str2);

  for (i = 0; str1[i] != '\0'; i++)
  {
    ocorrencias1[str1[i]]++;
  }

  for (i = 0; str2[i] != '\0'; i++)
  {
    ocorrencias2[str2[i]]++;
  }

  for (i = 0; i < 256; i++)
  {
    if (ocorrencias1[i] != ocorrencias2[i])
    {
      printf("As strings não são anagramas\n");
      return 0;
    }
  }

  printf("As strings são anagramas\n");

  return 0;
}