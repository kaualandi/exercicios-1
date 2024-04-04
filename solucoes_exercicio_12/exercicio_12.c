#include <stdio.h>

// O problema de Josephus é assim conhecido por causa da lenda de Flavius Josephus,
//  um historiador judeu que viveu no século 1. Segundo o relato de Josephus do cerco de
//  Yodfat, ele e seus companheiros (40 soldados) foram presos em uma caverna, cuja
//  saída foi bloqueada pelos romanos. Eles preferiram suicidar-se a serem capturados, e
//  decidiram que iriam formar um círculo e começar a matar-se pulando de três em três.
//  Josephus afirma que, por sorte ou talvez pela mão de Deus, ele permaneceu por último
//  e preferiu entregar-se aos romanos a suicidar-se. Elabore um programa em C que leia
//  um inteiro representando a quantidade de casos de teste. Para cada caso de teste,
//  retorne a posição do sobrevivente, após ler dois números inteiros: (i) numero e (ii)
//  salto. O número numero representa a quantidade de pessoas no círculo, numeradas
//  de 1 até numero. O número salto representa o tamanho do salto de um homem até o
//  próximo homem que será morto. A figura a seguir ilustra um exemplo onde numero = 5
//  e salto = 2.
//  Neste exemplo o elemento que restará após as eliminações é 3. A seguir, há mais
//  exemplos de entradas e saídas.

int main()
{

  int casos, i, j, numero, salto;

  printf("Digite a quantidade de casos de teste: ");
  scanf("%d", &casos);

  for (i = 0; i < casos; i++)
  {
    printf("Digite o numero de pessoas e o salto: ");
    scanf("%d %d", &numero, &salto);

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
