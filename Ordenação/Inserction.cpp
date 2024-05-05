#include <iostream>
#include <cstdlib>
#define SIZE 8

//Insertion Sort

using namespace std;

int main(void){

    int *lista = NULL;
    lista = (int*)malloc(SIZE * sizeof(int));
    if(lista == NULL){
        cout << "Error";
        exit(1);
    }

    for(int i = 0;i < SIZE;i++){
        lista[i] = rand() % 8;
    }
    
    cout << "Lista Desordenada -> ";
    for(int i = 0;i < SIZE;i++){
        cout << " " << lista[i];
    }
    cout << "\n";

    for(int i = 1;i < SIZE;i++){
        int key = lista[i];

        int j = i - 1;
        while(j >= 0 && lista[j] > key){
            lista[j + 1] = lista[j];
            j = j - 1;
        }
        lista[j + 1] = key;
    }

    cout << "Lista Ordenada -> ";
    for(int i = 0;i < SIZE;i++){
        cout << " " << lista[i];
    }

    free(lista);
    cout << "\n";
    return 0;
}