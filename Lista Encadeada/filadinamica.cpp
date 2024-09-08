#include <iostream>
#include "filadinamica.h"
#include <cstddef>

using namespace std;

filaDinamica::filaDinamica(){
    Primeiro = NULL;
    Ultimo = NULL;
}
filaDinamica::~filaDinamica(){
    Node *tempNode;
    while(Primeiro != NULL){
        tempNode = Primeiro;
        Primeiro = tempNode->Proxima;
        delete tempNode;
    }
    Ultimo = NULL;
}
bool filaDinamica::isEmpty(){
    if(Primeiro == NULL)
        return 1;
    else
        return 0;
}
bool filaDinamica::isFull(){

    Node *tempNode;
    try{
        tempNode = new Node;
        delete tempNode;
        return false;
    }catch(bad_alloc exception){
        cout << "Erro" << endl;
        return true;
    }
}
void filaDinamica::insert(typeItem item){

    if(isFull()){
        cout << "Fila cheia" << endl;
    }else{
        Node *newNode = new Node;
        newNode->valor = item;
        newNode->Proxima = NULL;
        if(Primeiro == NULL){
            Primeiro = newNode;   
        }else{
            Ultimo->Proxima = newNode;
        }
        Ultimo = newNode;
    }
}
typeItem filaDinamica::remove(){
    if(isEmpty()){
        cout << "Fila Vazia" << endl;
        return 0;
    }else{
        Node *newNode;
        newNode = Primeiro;
        typeItem value = newNode->valor;
        Primeiro = newNode->Proxima;
        if(Primeiro == NULL){
            Ultimo = NULL;
        }
        delete newNode;
        return value;
    }
}
void filaDinamica::show(){
    Node* tempNode = Primeiro;

    while(tempNode != NULL){
        cout << "Valor -> " << tempNode->valor << endl;
        tempNode = tempNode->Proxima;
    }
}