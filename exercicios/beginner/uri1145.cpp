#include <iostream>
using namespace std;

int main(){     // 75% COPIADO >:(

    int x,y,aux,i;
    cin >> x >> y;

    for(i=1;i<=y;++i){
        cout << i << " ";
        aux+=1;
        if(aux==x){
            cout << "" << endl;
            aux=0;
        }
    }
    return 0;
}