#include <iostream>

using namespace std;
typedef int DataType;

struct Node{
    DataType value;
    Node* Left;
    Node* Right;
};

class BST{
    private:
        Node* root;

    public:
        BST();
        ~BST(){};
        void deleteTree(Node *node);
        Node* getRoot();
        bool isEmpty();
        bool isFull();
        void insert(DataType value);
        void remove(DataType value);
        void searchToRemove(DataType value, Node*& node);
        void deleteNode(Node*& node);
        void getSucessor(DataType& next, Node* temp);
        void search(DataType& item, bool& busca);
        void showPreOrder(Node* node);
        void showOrder(Node* node);
        void showPosOrder(Node* node); 
};