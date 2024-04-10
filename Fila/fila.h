#ifndef FILA
#define FILA
#define Max_Itens 100

class Fila{
    private:
        int sizeQueue;
        int* Estrutura;

    public:
        Fila();
        ~Fila(){}
        bool isEmpty();
        bool isFull();
        void add(int x);
        int remove();
        void show();
        void size();
};
#endif