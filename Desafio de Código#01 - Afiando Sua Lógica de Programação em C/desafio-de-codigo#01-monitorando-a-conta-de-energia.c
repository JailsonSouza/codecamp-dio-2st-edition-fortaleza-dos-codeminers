#include <stdio.h>

int main() {
  int consumo1, consumo2, consumo3;
  float media;

  // Lendo os valores de consumo das três máquinas
  scanf("%d %d %d", &consumo1, &consumo2, &consumo3);

  //TODO: Calcule a média de consumo e a imprima com duas casas decimais.
  media = (consumo1 + consumo2 + consumo3) / 3.0;
  printf("%0.2f", media);
  return 0;
}