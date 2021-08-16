#include <iostream>
using namespace std;

// The Greatest 
int main(){

    int a, b, c, maior_ab, maior_abc;
    cin >> a >> b >> c;

    maior_ab = (a + b + abs(a - b))/2;
    maior_abc = (maior_ab + c + abs(maior_ab - c))/2;

    cout << maior_abc << " eh o maior" << endl;

    return 0;
}