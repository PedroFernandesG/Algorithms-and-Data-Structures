#include <iostream>
#include <algorithm> 

typedef int DataType;

using namespace std;

int parent(int i) {
    return i / 2;
}

int left(int i) {
    return 2 * i;
}

int right(int i) {
    return (2 * i) + 1;
}

void max_heapify(DataType array[], int tam, int i){
    
    int L = left(i); // Filho a esquerda do nó analisado
    int R = right(i); // Filho a direita do nó analisado
    int maior = i; // Inicialmente vamos assumir o maior nó como o i
    
    if (L <= tam && array[L] > array[i]){
        //Se o da esquerda for maior que o nó i, então o maior sera o referente a esquerda
        maior = L;
    }
    if (R <= tam && array[R] > array[maior]){
        //Se o da direita for maior que o nó i, então o maior sera o referente a direita
        maior = R;
    }

    //Se o maior for algum dos filhos do nó i analisado
    if (maior != i){
        std::swap(array[i], array[maior]);  // Troca os elementos
        max_heapify(array, tam, maior);  // Restaura a propriedade do max-heap
        
    }
}
// Função para construir o max-heap
void build_max_heap(DataType array[], int tam){
    
    for (int i = tam / 2; i >= 1; i--){
        //Aplica a função max_heapify a todos os elementos do array(que não são folhas) pra transformar em uma heap de maximo
        max_heapify(array, tam, i);
    }
}

// Função para realizar o heapsort
void heapSort(DataType array[], int tam) {
    build_max_heap(array, tam);
    
    for (int i = tam; i >= 2; i--) {
        std::swap(array[1], array[i]);  // Move o maior elemento para o final do array
        tam--;  // Reduz o tamanho do heap, pois o maior elemento esta no final, não ha mais o que interferir nele
        max_heapify(array, tam, 1);  // Restaura a propriedade do max-heap
    }
}
int main(void){
    
    DataType array[] = {-1, 16, 14, 10, 8, 7, 9, 3, 2, 4, 1};  // Nota: array[0] é ignorado para simplificar o índice
    int tam = sizeof(array) / sizeof(array[0]) - 1;
    
    heapSort(array, tam);
    
    for (int i = 1; i <= tam; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
