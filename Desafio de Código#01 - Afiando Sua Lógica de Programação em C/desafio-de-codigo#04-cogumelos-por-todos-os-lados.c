#include <stdio.h>

int main() {
  int minutos;
  float cogumelosColhidos;
  // Lê a quantidade de minutos disponíveis para colheita
  scanf("%d", &minutos);

  // TODO: Calcule e imprima a quantidade de cogumelos colhidos.
  cogumelosColhidos = (minutos/3.0);
  printf("%f", cogumelosColhidos);
  return 0;
}