// Algoritmo do Merge Sort, excelente exemplo da tecnica de dividir e conquistar
#include <iostream>

typedef int DataType;
using namespace std;

void Merge(DataType B[], DataType p, DataType A[],DataType q, DataType lista[]){
    
    int i = 0, j = 0, k = 0;
    
    while (i < p && j < q){
        if(B[i] <= A[j]){
            lista[k] = B[i];
            i++;
        }else{
            lista[k] = A[j];
            j++;
        }
        k++;
    }
    while (i < p) {
        lista[k] = B[i];
        i++;
        k++;
    }
    
    while (j < q) {
        lista[k] = A[j];
        j++;
        k++;
    }
}


void Mergesort(DataType* lista, int n){

    // Cria sub-arrays B e C
    int* B = new int[n/2];
    int* A = new int[n - (n/2)];
    
    if(n > 1){
        
        for(int i = 0;i < n/2;i++){
            B[i] = lista[i];
        }
        
        for(int i = n/2;i < n;i++){
            A[i - n/2] = lista[i];
        }
        
        Mergesort(B, n/2);
        Mergesort(A, n - (n/2));
        
        Merge(B,n/2,A,n - (n/2), lista);
        
        delete[] B;
        delete[] A;
    }
}


int main(void){
    
    int n = 10;
    DataType *Lista = new DataType[n];
    
    for(int i = 0;i < n;i++) cin >> Lista[i];
    
    Mergesort(Lista, n);
    
    for(int i = 0;i < n;i++) cout << " " << Lista[i];
    
    return 0;   
}
