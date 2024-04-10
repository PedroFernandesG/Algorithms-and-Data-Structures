#include <iostream>
#include "fila.h"

using namespace std;

Fila::Fila(){
    sizeQueue = 0;
    Estrutura = new int[Max_Itens];
}
bool Fila::isEmpty(){
    if(sizeQueue == 0)
        return true;
    else
        return false;
}
bool Fila::isFull(){
    if(sizeQueue == Max_Itens)
        return true;
    else
        return false;
}
void Fila::add(int x){
    Estrutura[sizeQueue] = x;
    sizeQueue++;
}
int Fila::remove(){
    for(int i = 0;i < sizeQueue - 1;i++)
        Estrutura[i] = Estrutura[i+1];
    
    Estrutura[sizeQueue - 1] = '\0';
    sizeQueue--;

}
void Fila::show(){
    for(int i = 0;i < sizeQueue;i++)
        printf("%d\n",Estrutura[i]);

}
void Fila::size(){
    cout << "Size is ->" << sizeQueue << endl;
}