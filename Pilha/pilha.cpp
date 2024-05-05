#include "pilha.h"
#include <iostream>
using namespace std;

Pilha::Pilha(){
    sizep = 0;
    Estrutura = new TipoItem[max_itens];
}
bool Pilha::isFull(){
    if(sizep == max_itens)
        return true;
}
bool Pilha::isEmpty(){
    if(sizep == 0)
        return true;
}
void Pilha::pushElement(TipoItem item){
    Estrutura[sizep] = item;
    sizep++;
}
TipoItem Pilha::popElement(){
    if(!isEmpty()){
        sizep--;
        return Estrutura[sizep];
        
    }else{
        cout << "the stack is empty" << endl;
        return 0;
    }
}
void Pilha::show(){
    for(int i = 0;i < sizep;i++){
        cout << "Element" << i + 1 << " -> " << Estrutura[i] << " ";
    }
}
void Pilha::size(){
    cout << "Size ->" << sizep << endl;
}
