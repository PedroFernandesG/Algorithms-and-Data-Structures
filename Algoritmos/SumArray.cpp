#include <iostream>

using namespace std;
typedef int DataType;

DataType sumArray(DataType* list, int size){

  DataType sum = 0;

  for(int i = 0;i < size;i++){
    sum += list[i];
  }
  return sum;
} 

int main(void){

  DataType array[5] = {4,6,3,7,8};
  int sum = sumArray(array,5);

  cout << "Sum --> " << sum << endl;
}
