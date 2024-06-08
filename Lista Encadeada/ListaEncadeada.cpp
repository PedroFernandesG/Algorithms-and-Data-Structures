#include <iostream>

using namespace std;

int main(void){

    //Uma struct que tem um valor inteiro e um ponteiro de uma outra struct lista
    struct lista{
        int valor;
        struct lista *Proxima;
    };

    struct lista Est1, Est2, Est3;
    struct lista *gancho = &Est1;

    Est1.valor = 5;
    Est2.valor = 3;
    Est3.valor = 8;

    Est1.Proxima = &Est2;
    Est2.Proxima = &Est3;
    Est3.Proxima = NULL;

    while(gancho != (struct lista*)0){
       cout << gancho->valor;
       gancho = gancho->Proxima;
    }

    return 0;
}

