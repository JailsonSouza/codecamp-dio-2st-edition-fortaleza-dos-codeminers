#include <stdio.h>

int main() {
  int temperatura;
  scanf("%d", &temperatura);
  
  // TODO: Crie as condições de acordo com as saídas deste desafio.
  printf("%s", (temperatura < 18) ? "Baixa" : (temperatura > 24) ? "Alta" : "Ideal");
  return 0;
}