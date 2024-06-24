#include <stdio.h>
#include <stdlib.h>

void insertionSort(int reliquias[], int quantidade) {
  // TODO: Implemente o algoritmo de ordenação "Insertion Sort".
  for (int indice = 1; indice < quantidade; indice++) {
		int reliquiaParaOrdenar = reliquias[indice];
		int indiceAnterior;
		
		for (indiceAnterior = indice - 1; ((indiceAnterior >= 0) && (reliquias[indiceAnterior] > reliquiaParaOrdenar)); indiceAnterior--) {
      reliquias[indiceAnterior + 1] = reliquias[indiceAnterior];
    }
		
		reliquias[indiceAnterior + 1] = reliquiaParaOrdenar;
	}
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int  reliquias[quantidade];
  for (int i = 0; i < quantidade; i++) {
    scanf("%d", & reliquias[i]);
  }

  // Executa o algoritmo "insertionSort" para ordenar os "reliquias".
  insertionSort(reliquias, quantidade);

  // Imprime as "reliquias" ordenados
  for (int i = 0; i < quantidade; i++) {
    printf("%d ",  reliquias[i]);
  }
  return 0;
}