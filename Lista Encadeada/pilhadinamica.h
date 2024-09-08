typedef int typeItem;

#ifndef PILHA
#define PILHA

struct Node{

    typeItem valor;
    Node *proximo;

};

class pilhaDinamica{
    private:

    Node *Topo;

    public:
        pilhaDinamica();
        ~pilhaDinamica();
        bool isEmpty();
        bool isFull();
        void inserir(typeItem item);
        typeItem remove();
        void show();
};

#endif