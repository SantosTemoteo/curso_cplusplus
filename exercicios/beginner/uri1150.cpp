#include <iostream>
using namespace std;

int main(){     // 100% COPIADO

    int x,z,a=1,c=0,i;
    cin >> x;
    cin >> z;

    while(z<=x){
        cin >>z;
    }
    for(i=x;i<=z;i++){
        c+=i;
        if(c>z){
            break;
        }
        a++;
    }
    cout << a << endl;
    return 0;
}