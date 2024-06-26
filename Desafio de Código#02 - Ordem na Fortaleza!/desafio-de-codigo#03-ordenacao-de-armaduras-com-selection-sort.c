#include <stdio.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int quantidade){ 
  // TODO: Implemente o algoritmo "Selection Sort" para ordenação DECRESCENTE.
  // Dica: O método "trocar" pode ser útil ;)
  for (int posicaoAtual = 0; posicaoAtual < quantidade - 1; posicaoAtual++) {
    int indiceDaArmaduraMaisForte = posicaoAtual;

    for (int indiceComparacao = posicaoAtual + 1; indiceComparacao < quantidade; indiceComparacao++) {
        indiceDaArmaduraMaisForte = (array[indiceComparacao] > array[indiceDaArmaduraMaisForte]) ? indiceComparacao : indiceDaArmaduraMaisForte;
    }

    trocar(&array[posicaoAtual], &array[indiceDaArmaduraMaisForte]);
  }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int armaduras[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &armaduras[i]);
  }
  
  // Executa o algoritmo "selectionSort" para deixar as "armaduras" em ordem DECRESCENTE.
  selectionSort(armaduras, quantidade);
  
  // Imprime as "armaduras" ordenados.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", armaduras[i]);
  }
  
  return 0;
}