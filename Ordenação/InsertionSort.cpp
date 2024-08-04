//Algoritmo do Insertion Sort

#include <iostream>

using namespace std;
typedef int DataType;

void InsertionSort(DataType *lista, int tam){
    
    int j;
    for(int i = 1;i < tam;i++){
        int key = lista[i];
        
        j = i - 1;
        while(j>=0 && lista[j] > key){
            lista[j+1] = lista[j];
            j--;
        }
        lista[j+1] = key;
    }
}

int main(void){
    
    int n = 10;
    DataType lista[10];
    
    for(int i = 0;i < 10;i++) cin >> lista[i];
    
    InsertionSort(lista,n);
    
    for(int i = 0;i < 10;i++) cout << " " << lista[i];
}
