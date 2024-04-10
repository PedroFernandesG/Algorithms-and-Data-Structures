#include <iostream>
#include <fila.h>

using namespace std;

int main(void){

    Fila fila1;

    int escolha, elemento;
    while(escolha != 0){

        printf("Bem vindo ao programa da fila!\n");
        printf("Digite 0 para fechar o programa\n");
        printf("Digite 1 para adicionar um elemento!\n");
        printf("Digite 2 para excluir um elemento!\n");
        printf("Digite 3 para ver o tamanho da fila!\n");
        printf("Digite 4 para ver os elementos da fila!\n");
        cin >> escolha;

        if(escolha == 1){
            cout << "Digite o elemento a ser adicionado" << endl;
            cin >> elemento;
            fila1.add(elemento);
        }
        else if(escolha == 2)
            fila1.remove();
        else if(escolha == 3)
            fila1.size();
        else if(escolha == 4)
            fila1.show();
    }
    return 0;
}
