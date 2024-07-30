/*

//Implements the sieve of Eratosthenes
//Input: A positive integer n > 1
//Output: Array L of all prime numbers less than or equal to n

2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25
2 3 5 7 9 11 13 15 17 19 21 23 25
2 3 5 7 11 13 17 19 23 25
2 3 5 7 11 13 17 19 23

*/

#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    
    int n, j; // Numero de elementos iniciais do crivo de Eratosthenes -> n
    
    cout << "Digite o tamanho da lista do crivo de Eratosthenes -> :";
    cin >> n;
    
    int list[n];
    int numerosPrimos[n];

    for(int i = 2;i < n;i++){
        list[i] = i;
        //Preenchendo a lista de numeros de 2 ate n
    }
    
    //Utilizando a propiedade matematica para iterar ate raiz de n
    
    for(int i = 2;i < sqrt(n);i++){
        
        //Se e elemento em xeque for diferente de zero
        
        if(list[i] != 0){ 
            //Pegue o primeiro multiplo
            j = i * i;
            
            //Enquanto for menor que o tamanho do crivo, elimine todos os multiplos de i
            while(j <= n){
                //Atribui como zero os multiplos
                list[j] = 0; 
                //Faz a soma para atualizar os multiplos
                j = j + i;
            }
        }
    }
    
    int k = 0;
    for(int p = 2;p < n;p++){
        //Transferencia para o vetor de primos
        if(list[p] != 0){
            numerosPrimos[k] = list[p];
            k++;
        }
    }
    
    for(int i = 0;i < k;i++){
        cout << numerosPrimos[i] << endl;
    }
    
    return 0;
}


