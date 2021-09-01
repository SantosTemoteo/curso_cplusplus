#include <iostream>
using namespace std;

int main(){

    int i, j;

    for(i=1,j=60; i!=j && j>=0; i+=3, j-=5){        // j = 0 é o ponto de parada
        cout << "I=" << i << " ";
        cout << "J=" << j << endl;
    }

    return 0;
}