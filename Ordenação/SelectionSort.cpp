//Algoritmo Do Selection Sort

#include <iostream>
typedef int datatype;
using namespace std;

void SelectionSort(datatype *lista, int tam){
    
    int min;
    for(int i = 0;i < tam-1;i++){
        min = i;
        for(int j = i + 1;j < tam;j++){
            if(lista[j] < lista[min])
                min = j;
        }
        if(i != min){
            datatype temp = lista[i];
            lista[i] = lista[min];
            lista[min] = temp;
        }
    }
}

int main(void){
    
    int n = 10;
    int lista[n];
    for(int i = 0;i < n;i++) cin >> lista[i];
    
    SelectionSort(lista, n);
    
    for(int i = 0;i < n;i++) cout << lista[i] << " ";
    
}
