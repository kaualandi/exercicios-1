#include "stdio.h"

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