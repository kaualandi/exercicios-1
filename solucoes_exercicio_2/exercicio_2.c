#include "stdio.h"

// Desenvolva um programa em C que apresente ao usuário um menu com as seguintes opções:
//                   Digite uma das opcoes abaixo:
//                   1- Transformar KPH para MPH;
//                   2- Transformar MPH para KPH.
// Caso o usuário informe a Opção 1 (como valor inteiro), um valor de ponto flutuante representando uma medida em quilômetros por hora (KPH) deverá ser lido e convertido para milhas por hora (MPH). Caso a Opção 2 seja escolhida, um valor de ponto flutuante representando uma medida em milhas por hora (MPH) deverá ser lido e convertido para quilômetros por hora (KPH). Caso nenhuma das opções disponíveis seja fornecida pelo usuário, o programa deverá encerrar. Exiba os valores lidos e convertidos seguindo a orientação do Exercício 1.

int main()
{
  int opcao;
  float kph, mph;

  printf("Digite uma das opcoes abaixo:\n");
  printf("1- Transformar KPH para MPH;\n");
  printf("2- Transformar MPH para KPH.\n");
  scanf("%d", &opcao);

  if (opcao == 1)
  {
    printf("Digite a velocidade em KPH: ");
    scanf("%f", &kph);
    mph = kph / 1.609;
    printf("Velocidade em KPH: %f\n", kph);
    printf("Velocidade em MPH: %f\n", mph);
  }
  else if (opcao == 2)
  {
    printf("Digite a velocidade em MPH: ");
    scanf("%f", &mph);
    kph = mph * 1.609;
    printf("Velocidade em MPH: %f\n", mph);
    printf("Velocidade em KPH: %f\n", kph);
  }
  else
  {
    return 0;
  }

  return 0;
}