#include <iostream>


using namespace std;

int n1, n2; // global

int main(){
    //operadores matemáticos () * / + - % 
    int n3, n4; // local
    int res;
    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = (n1 + n2 + n3 + n4)-10;
    cout << "A soma das Variáveis =" << res << "\n\n";


    return 0;
}