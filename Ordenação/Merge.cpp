#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#define SIZE 8

using namespace std;

//Merge sort
/*
Um algoritmo de ordenação mais sofisticado que outros como insertion,selection....

Complexidade Computacional
->Melhor caso: O(N log N)
->Pior Caso O(N log N)
->Estavel e rapido, entretanto tem um gasto maior de memoria
->Recursivo
*/
void merge(int *lista, int inicio, int meio, int fim){

    int *temp, pont1, pont2, tam, i, j, k;
    int fim1 = 0, fim2 = 0;
    tam = fim - inicio + 1;
    pont1 = inicio;
    pont2 = meio + 1;

    temp = (int*) malloc(tam * sizeof(int));

    if(temp != NULL){
        for(i =0;i < tam;i++){
            if(!fim1 && !fim2){
                if(lista[pont1] < lista[pont2])
                    temp[i] = lista[pont1++];
                else   
                    temp[i] = lista[pont2++];

                if(pont1 > meio) fim1 = 1;
                if(pont2 > fim) fim2 = 1;
            }else{
                if(!fim1)
                    temp[i] = lista[pont1++];
                else   
                    temp[i] = lista[pont2++];
            }
        }
        for(j = 0, k = inicio; j < tam; j++, k++){
            lista[k] = temp[j];
        }
    }
    free(temp);
}

/*No Paradigma dividir para conquistar vamos dividir a lista em sun-listas,
recursivamente, ate que cada sub-lista tenha apenas um elemento, isso é feito usando
a função Merge-Sort*/
void mergeSort(int *lista, int inicio, int fim){
    int meio;
    if(inicio < fim){ 
        /*
        A função mergeSort verifica se inicio é menor que fim, o que significa que ainda há mais de um elemento na sub-lista atual a ser ordenada.
        Em seguida, calcula o índice do meio da sub-lista e chama recursivamente mergeSort para as duas metades da lista.
        Isso continua até que as sub-listas tenham apenas um elemento.
        */
        meio = floor((inicio+fim)/2);
        mergeSort(lista,inicio,meio);
        mergeSort(lista,meio+1,fim);
        merge(lista,inicio,meio,fim);
    }
}
int main(void){

    int *lista = NULL;
    lista = (int*)malloc(SIZE * sizeof(int));

    for(int i = 0;i < SIZE;i++){
        lista[i] = rand() % 8;
    }

    cout << "Lista Desordenada -> ";
    for(int i = 0;i < SIZE;i++){
        cout << " " << lista[i];
    }

    mergeSort(lista,0,7);
    cout << "\nLista Ordenada -> ";
    for(int i = 0;i < SIZE;i++){
        cout << " " << lista[i];
    }


    return 0;
}