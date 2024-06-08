#include <stack>
#include <iostream>

using namespace std;

int main(void){

    stack <int> Pilha;

    //Adicionando elementos na pilha
    Pilha.push(3);
    Pilha.push(5);
    Pilha.push(7);

    //Verificando se a pilha ta vazia
    cout << "It's Empty?" << Pilha.empty() << endl;

    //Remove o elemento da parte superior da pilha
    Pilha.pop();

    //Retorna o tamanho da pilha
    cout << "Size -> " << Pilha.size() << endl;

    //Retorna referencia ao elemento superior
    cout << "Top -> " << Pilha.top() << endl;

    return 0;
}