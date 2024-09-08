//Graph Undirected

#include <iostream>
using namespace std;

typedef string TypeItem;

class Graph{
    
    private:
    
        int edgeNull;
        int maxVert;
        int numVert;
        TypeItem* vertices;
        int **matriz;
        bool *mark;
    
    public:
    
        Graph(int maxVert, int edgeNull);
        ~Graph();
        int getIndex(TypeItem item);
        bool isFull();
        void insertVert(TypeItem item);
        void insertEdge(TypeItem inNode, TypeItem outNode, int weight);
        int getGrau(TypeItem item);
        int getWeight(TypeItem inNode, TypeItem outNode);
        void printMatrix();
        void printVert();
        void cleanMarks();
        void BFS(TypeItem initial, TypeItem final);
        void DFS(TypeItem initial, TypeItem final);
};








