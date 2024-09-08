#include "Graph.h"
#include "filadinamica.h"
#include "pilhadinamica.h"

Graph::Graph(int maxVert, int edgeNull){
    
    this->edgeNull = edgeNull;
    this->maxVert = maxVert;
    numVert = 0;
    
    vertices = new TypeItem[this->maxVert];
    this->matriz = new int*[this->maxVert];
    
    for(int i = 0;i < this->maxVert;i++){
        matriz[i] = new int[this->maxVert]; 
    }
    
    for(int i = 0;i < this->maxVert;i++){
        for(int j = 0;j < this->maxVert;j++){
            matriz[i][j] = this->edgeNull;
        }
    }
}
Graph::~Graph(){
    
    delete [] vertices;
    
    for(int i = 0;i < this->maxVert;i++){
        delete [] matriz[i];
    }
    delete [] matriz;
}
int Graph::getIndex(TypeItem item){
    
    int index = 0;
    while(item != vertices[index]){
        index++;
    }
    return index;
}
bool Graph::isFull(){
    
    if(this->numVert == this->maxVert){
        return true;
    }else{
        return false;
    }
}
void Graph::insertVert(TypeItem item){
    
    if(isFull()){
        cout << "This graph is full, you cannot add more!" << endl;
    }else{
        
        vertices[numVert] = item;
        numVert++;
    }
}
void Graph::insertEdge(TypeItem inNode, TypeItem outNode, int weight){
    
    int index1 = getIndex(inNode);
    int index2 = getIndex(outNode);
        
    matriz[index1][index2] = weight;
        
}
void Graph::insertEdge(TypeItem inNode, TypeItem outNode, int weight){
    
    int index1 = getIndex(inNode);
    int index2 = getIndex(outNode);
    
    matriz[index1][index2] = weight;
    matriz[index2][index1] = weight;

}
int Graph::getWeight(TypeItem inNode, TypeItem outNode){
    
    int index1 = getIndex(inNode);
    int index2 = getIndex(outNode);
    
    int Weight = matriz[index1][index2];
    
    return Weight;
}
void Graph::printMatrix(){
    
    for(int i = 0;i < this->numVert;i++){
        for(int j = 0;j < this->numVert;j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
void Graph::printVert(){
    
    for(int i = 0;i < this->numVert;i++){
        cout << vertices[i] << endl;
    }
}

void Graph::cleanMarks(){

    for(int i = 0;i < this->maxVert;i++)
        mark[i] = false;

}
void Graph::BFS(TypeItem initial, TypeItem final){

    filaDinamica fila;
    bool found = false;
    cleanMarks();
    fila.insert(initial);

    do{
        TypeItem vert = fila.remove(); 
        if(vert == final){
            cout << "Passing :" << vert << endl;
            cout << "Path Found" << endl;
            found = true;
        }else{

            int index = getIndex(vert);
            cout << "Passing :" << vert << endl;

            for(int i = 0;i < this->maxVert;i++){
                if(matriz[index][i] != this->edgeNull){
                    if(!mark[i]){
                        cout << "Put in Queue :" << vertices[i] << endl;
                        fila.insert(vertices[i]);
                        mark[i] = true;
                    }
                }
            }
        }
    }while(!fila.isEmpty() && !found);
    if(!found){
        cout << "Not Found it\n";
    }
}
void Graph::DFS(TypeItem initial, TypeItem final){

    pilhaDinamica pilha;
    bool found = false;
    cleanMarks();
    pilha.inserir(initial);

    do{
        TypeItem vert = pilha.remove(); 
        if(vert == final){
            cout << "Passing :" << vert << endl;
            cout << "Path Found" << endl;
            found = true;
        }else{

            int index = getIndex(vert);
            cout << "Passing :" << vert << endl;

            for(int i = 0;i < this->maxVert;i++){
                if(matriz[index][i] != this->edgeNull){
                    if(!mark[i]){
                        cout << "Put in Stack :" << vertices[i] << endl;
                        pilha.inserir(vertices[i]);
                        mark[i] = true;
                    }
                }
            }
        }
    }while(!pilha.isEmpty() && !found);
    if(!found){
        cout << "Not Found it\n";
    }
}

