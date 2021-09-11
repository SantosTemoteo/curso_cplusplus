#include <iostream>
using namespace std;

int main(){     // 75% COPIADO, presentation error 100% >:(

    int x,y,aux=0,i;
    cin >> x >> y;

    for(i=1;i<=y;i++){
        cout << i << " ";
        aux+=1;
        if(aux==x){
            cout << endl;
            aux=0;
        }
        if(i==y){break;}
    }
    return 0;
}