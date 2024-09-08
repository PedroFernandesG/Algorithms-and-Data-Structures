#ifndef FILA
#define FILA

typedef int typeItem;

struct Node{

    typeItem valor;
    Node *Proxima;
};

class filaDinamica{
    private:
    
     Node *Primeiro;
     Node *Ultimo;
    public:
        filaDinamica();
        ~filaDinamica();
        bool isEmpty();
        bool isFull();
        void insert(typeItem item);
        typeItem remove();
        void show();
};
#endif