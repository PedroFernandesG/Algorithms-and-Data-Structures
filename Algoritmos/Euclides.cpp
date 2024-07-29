/*
algorithm to find the greatest divisor commun between two numbers nonngegatives a and b

Euclid’s algorithm is based on applying repeatedly the equality
    gcd(m, n) = gcd(n, m mod n)
    
    For example, gcd(60, 24) can be computed as follows:
        gcd(60, 24) = gcd(24, 12) = gcd(12, 0) = 12.

*/

#include <iostream>

using namespace std;

int main(void){
    
    int M, N, Temp;
    
    cout << "Digite dois numeros para calcular seu MDC" << endl;
    cout << "Numero um -> :";
    cin >> M;
    cout << "Numero Dois -> :";
    cin >> N;
    
    while(N != 0){
        if(N == 0)
            break;
        else if(N != 0){
            Temp = N;
            N = M % N;
            M = Temp;
        }
    }
    
    return M;
}
