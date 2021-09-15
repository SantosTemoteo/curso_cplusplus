#include <iostream>
using namespace std;

int main(){

    int n,i,x,e,f=0;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> x;
        for(e=1;e<x;e++){
            if(x%e==0){
                f+=e;
            }
        }
        if(f==x){
            cout << x << " eh perfeito" << endl;
        }else{
            cout << x << " nao eh perfeito" << endl;
        }
        f=0;
    }

    return 0;
}