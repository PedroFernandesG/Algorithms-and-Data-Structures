#include <iostream>
#include "pilhadinamica.h"
#include <cstddef>

using namespace std;

pilhaDinamica::pilhaDinamica(){
    Topo = NULL;
}
pilhaDinamica::~pilhaDinamica(){

    Node *tempNode;
    while(Topo != NULL){
        tempNode = Topo;
        Topo = Topo->proximo;
        delete tempNode;
    }
}
bool pilhaDinamica::isEmpty(){

    return (Topo == NULL);
}

bool pilhaDinamica::isFull(){

    Node* newNode;
    try{
      newNode = new Node;
      delete newNode;
      return false;
    }catch(bad_alloc exception){
      return true;
    }
}
void pilhaDinamica::inserir(typeItem item){
    if(isFull()){
        cout << "Pilha cheia" << endl;
    }
    else{
        Node *newNode = new Node;
        newNode->valor = item;
        newNode->proximo = Topo;
        Topo = newNode;
    }
}
typeItem pilhaDinamica::remove(){
    if(!isEmpty()){
        cout << "Pilha Vazia!! Underflow" << endl;
    }
    else{
        Node *tempNode = new Node;
        tempNode = Topo;
        typeItem item = Topo->valor;
        Topo = Topo->proximo;
        delete tempNode;
        return item;
    }
}
void pilhaDinamica::show(){

    Node *tempNode = Topo;
    while(tempNode != NULL){
        cout << "The value is ->" << tempNode->valor << endl;
        tempNode = tempNode->proximo;
    }
}