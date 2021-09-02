#include <iostream>
using namespace std;

int main(){         // 100% COPIADO 

    int i=0,j=0;

    for(i=1;i<=9; i+=2){         // 1+=2 substitui o if 1%2==0
        for(j=7; j>=5; j--){
            cout << "I=" << i;
            cout << " J=" << j << endl;
        }
    }
    return 0;
}