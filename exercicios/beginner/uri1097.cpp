#include <iostream>
using namespace std;

int main(){

    int i,j,f=7,g=5;

    for(i=1; i<=9; i+=2){
        for(j=f; j>=g; j--){
            cout << "I=" << i;
            cout << " J=" << j << endl;
        }
        f+=2;
        g+=2;
    }

    return 0;
}