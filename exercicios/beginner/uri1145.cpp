#include <iostream>
using namespace std;

int main(){     // 75% COPIADO, presentation error 100% >:(

    int x,y,aux=0,i;
    cin >> x >> y;
    y-=1;
    for(i=1;i<=y;i++){
        cout << i << " ";
        if(i==y){
            cout << i << endl;
        }
        aux+=1;
        if(aux==x){
            cout << endl;
            aux=0;
        }
        
        if(i==y+1){break;}
    }
    return 0;
}