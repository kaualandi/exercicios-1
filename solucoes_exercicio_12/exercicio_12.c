#include <stdio.h>

int main()
{

  int casos, i, j, numero, salto;

  printf("Digite a quantidade de casos de teste: ");
  scanf("%d", &casos);

  for (i = 0; i < casos; i++)
  {
    printf("Digite o numero de pessoas: ");
    scanf("%d", &numero);

    printf("Digite o numero do salto: ");
    scanf("%d", &salto);

    int pessoas[numero];

    for (j = 0; j < numero; j++)
    {
      pessoas[j] = j + 1;
    }

    int sobrevivente = 0;
    int mortos = 0;
    int contador = 0;

    while (mortos < numero - 1)
    {
      if (pessoas[sobrevivente] != 0)
      {
        contador++;
      }

      if (contador == salto)
      {
        pessoas[sobrevivente] = 0;
        mortos++;
        contador = 0;
      }

      sobrevivente = (sobrevivente + 1) % numero;
    }

    for (j = 0; j < numero; j++)
    {
      if (pessoas[j] != 0)
      {
        printf("Sobrevivente: %d\n", pessoas[j]);
        break;
      }
    }
  }

  return 0;
}