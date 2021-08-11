#include <iostream>

using namespace std;

int main(){

    int n1,n2;

    n1=0;
    n2=10;

    cout << n1++ << "\n\n"; // inline no pós-incremento, 1 imprime o valor depois incrementa
    cout << ++n2 << "\n\n"; // inline no pré-incremento, 1 incrementa depois impriome o valor

    return 0;
}