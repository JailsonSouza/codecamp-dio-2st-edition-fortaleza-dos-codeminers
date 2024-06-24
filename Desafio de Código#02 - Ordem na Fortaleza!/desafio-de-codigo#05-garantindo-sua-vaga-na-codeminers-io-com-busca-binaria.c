#include <stdio.h>
#include <stdbool.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

bool estaOrdenado(int array[], int quantidade) {
  for (int i = 1; i < quantidade; i++) {
    if (array[i - 1] > array[i]) {
      return false;
    }
  }
  return true;
}

void bogoSort(int array[], int quantidade) {
  while (!estaOrdenado(array, quantidade)) {
    for (int i = 0; i < quantidade; i++) {
      int j = i + rand() % (quantidade - i);
      trocar(&array[i], &array[j]);
    }
  }
}

int buscaBinaria(int array[], int quantidade, int valor) {
  //TODO: Implemente o algoritmo de Busca Binária para encontrar o valor.
  int inf = 0;
  int sup = quantidade - 1;
  while (inf <= sup) {
    int meio = inf + (sup - inf) / 2;

    if (array[meio] == valor) {
      return true; 
    } else if (array[meio] < valor) {
      inf = meio + 1;
    } else {
      sup = meio - 1;
    }
  }

  return -1;
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int conteudos[quantidade];
  for (int i = 0; i < quantidade; i++) {
    scanf("%d", &conteudos[i]);
  }

  // Ordena os conteúdos usando Bogo Sort!?
  bogoSort(conteudos, quantidade);

  int encontrou = buscaBinaria(conteudos, quantidade, 777);

  //TODO: Criar as condições necessárias para imprimir "S" ou "N".
  printf("%s\n", (encontrou != -1 ? "S" : "N"));
  return 0;
}