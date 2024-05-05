#include <iostream>
#include "pilha.h"

using namespace std;

int main(){

   Pilha nossaPilha;

   int n;
   TipoItem item;

   cout << "Digite quantos elementos entraram na pilha" << endl;
   cin >> n;

   for(int i = 0;i < n;i++){
      cout << "Digite o elemento de numero " << i + 1 << endl;
      cin >> item;
      nossaPilha.pushElement(item);
   }

   nossaPilha.show();

   system("pause");

    return 0;
}