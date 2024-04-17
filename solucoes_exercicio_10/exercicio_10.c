#include <stdio.h>
#include <string.h>

int main()
{
  char string[100];
  int i, pulo;
  size_t tam;
  char direcao;

  printf("Digite uma string: ");
  scanf("%[^\n]s", string);

  tam = strlen(string);

  printf("Digite o valor do pulo: ");
  scanf("%d", &pulo);

  printf("Digite a direcao da codificacao (E/D): ");
  scanf(" %c", &direcao);

  for (i = 0; i < tam; i++)
  {
    if (string[i] != ' ')
    {
      if (direcao == 'D' || direcao == 'd')
      {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
          string[i] = 'A' + (string[i] - 'A' + pulo) % 26;
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
          string[i] = 'a' + (string[i] - 'a' + pulo) % 26;
        }
      }
      else if (direcao == 'E' || direcao == 'e')
      {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
          string[i] = 'A' + (string[i] - 'A' - pulo + 26) % 26;
        }
        else if (string[i] >= 'a' && string[i] <= 'z')
        {
          string[i] = 'a' + (string[i] - 'a' - pulo + 26) % 26;
        }
      }
    }
  }

  printf("Mensagem criptografada: %s\n", string);

  return 0;
}
