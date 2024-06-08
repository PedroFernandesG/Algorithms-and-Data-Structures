#include <iostream>

using namespace std;

int main(void){
    
    int list[10] = {1,4,6,8,34,56,57,59,78,99};

    int leftValue = 0;
    int rightValue = 9;

    int Key = 78;

    while(leftValue <= rightValue){
       int Mid = (leftValue + rightValue)/2;

       if(Key == list[Mid]){
            cout << "Valor Encontrado" <<endl;
            return 1;
       }
       else if(Key > list[Mid]){
            leftValue = Mid + 1;
       }else if(Key < list[Mid]){
            rightValue = Mid - 1;
       }
    }
    cout << "Valor Não Encontrado" << endl;
    return 0;
}

