#include <iostream>
using namespace std;

int main(){

    int x,i,f = 6;
    cin >> x;

    if(x%2 == 0){
        x+=1;       
        for(i = 0;i < f; i++){
            cout << x << endl;
            x+=2;
        }       
    }else if(x%2 == 1){
        for(i = 0; i < f; i++){
            cout << x << endl;
            x+=2;
        }
    }
    
    return 0;
}