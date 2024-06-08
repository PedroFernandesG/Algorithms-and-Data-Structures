#include <queue>
#include <iostream>

using namespace std;

int main(void){

    //Criando a fila
    queue <int> Fila;

    //Adicionando elementos na fila
    Fila.push(1);
    Fila.push(2);
    Fila.push(3);
    Fila.push(7);

    //Mostrando o tamanho
    cout << "Size -> " << Fila.size() << endl;

    //Teste se queue esta vazio retornando um bool
    cout << "It's empty?" << Fila.empty() << endl;

    //Retirando o elemento do inicio da fila
    Fila.pop();

    //Retorna referencia para o ultimo elemento adicionado
    cout << "Back ->" <<Fila.back() << endl;

    ///Retorna referencia ao primeiro elemento adicionado
    cout << "Front ->" << Fila.front() << endl;

    //Coloca um elemento no final da fila
    Fila.emplace(4);
     
    return 0;
}