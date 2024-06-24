#include <stdio.h>
#include <string.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char palavra[]) {
  // TODO: Implemente a lógica para inverter a "palavra".
  char caractereAuxiliar;
  for(int indice = 0; indice < strlen(palavra) / 2; indice++) {
        caractereAuxiliar = palavra[indice];
        palavra[indice] = palavra[strlen(palavra) - indice - 1];
        palavra[strlen(palavra) - indice - 1] = caractereAuxiliar;
    }
}

int main() {
  char palavra[100];

  // Lê a palavra a ser invertida do usuário.
  scanf("%s", palavra);

  // Chama a função que inverte a palavra.
  inverter(palavra);

  // Imprime a palavra invertida na tela.
  printf("%s", palavra);

  return 0;
}