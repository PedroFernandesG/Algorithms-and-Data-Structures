#ifndef PILHA
#define PILHA

typedef int TipoItem;
#define max_itens 100

class Pilha{
    private:
        int sizep;
        TipoItem *Estrutura;  
    public:
        Pilha();
        ~Pilha(){};
        bool isFull();//Verify if stack has elements
        bool isEmpty();//Verify if stack no has elements
        void pushElement(TipoItem item);//push element
        TipoItem popElement();//pop element and show which element was removed
        void show();//just show elements 
        void size();//show teh size 
};
    
#endif