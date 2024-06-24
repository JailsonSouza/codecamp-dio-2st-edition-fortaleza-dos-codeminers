#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void quickSort(int array[], int inicio, int fim){ 
  // TODO: Implemente o algoritmo "Quick Sort" para ordenação.
  // Dica: O método "trocar" pode ser útil ;)
  int indiceInicio, indiceFim, pivo, aux;
  
  indiceInicio = inicio;
  indiceFim = fim;
  pivo = array[(inicio + fim) / 2];
    
  while(indiceInicio <= indiceFim) {
  	while (indiceInicio < fim && array[indiceInicio] < pivo) indiceInicio++;
    while (indiceFim > inicio && array[indiceFim] > pivo) indiceFim--;
    if (indiceInicio <= indiceFim) {
      trocar(&array[indiceInicio], &array[indiceFim]);
      indiceInicio++;
      indiceFim--;
    }
  }
  
  if (indiceFim > inicio) quickSort(array, inicio, indiceFim + 1);
  if (indiceInicio < fim) quickSort(array, indiceInicio, fim);
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int joias[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &joias[i]);
  }
  
  int inicio = 0;
  int fim = quantidade - 1;
  // Executa o algoritmo "quickSort" para ordenar as "joias".
  quickSort(joias, inicio, fim);
  
  // Imprime as "joias" ordenadas.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", joias[i]);
  }
  
  return 0;
}