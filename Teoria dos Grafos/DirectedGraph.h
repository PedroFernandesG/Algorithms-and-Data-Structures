#include <iostream>
#include "filadinamica.h"
using namespace std;
typedef string TypeItem;

class DirectedGraph{
    
    public:
    
        int edgeNull;
        int maxVert;
        int numVert;
        TypeItem* vertices;
        int **matriz;
        bool *mark;
    
    private:
    
        DirectedGraph(int maxVert, int edgeNull);
        ~DirectedGraph();
        int getIndex(TypeItem item);
        bool isFull();
        void insertVert(TypeItem item);
        void insertEdge(TypeItem inNode, TypeItem outNode, int weight);
        pair<int, int> getGrau(TypeItem item);
        int getWeight(TypeItem inNode, TypeItem outNode);
        void printMatrix();
        void printVert();
        void cleanMarks();
        void BFS(TypeItem initial, TypeItem final);
        void DFS(TypeItem initial, TypeItem final);
};