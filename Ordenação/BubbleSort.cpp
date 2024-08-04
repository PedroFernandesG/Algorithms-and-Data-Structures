//Algoritmo Do Bubble short

#include <iostream>

typedef int datatype;
using namespace std;

void BubbleSort(datatype *lista, int tam){
    if(tam<1)return;
        
    for(int i = 0;i < tam;i++){
        if(lista[i] > lista[i+1]){
            datatype temp = lista[i];
            lista[i] = lista[i+1];
            lista[i+1] = temp;
        }
    }
    BubbleSort(lista, tam-1);
}

int main(void){
    
    int n = 10;
    int lista[n];
    for(int i = 0;i < n;i++) cin >> lista[i];
    
    BubbleSort(lista, n-1);
    
    for(int i = 0;i < n;i++) cout << lista[i] << " ";
    
}
