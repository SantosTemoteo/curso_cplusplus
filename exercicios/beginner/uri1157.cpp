#include <iostream>
using namespace std;

int main(){

    int n,i;
    cin >> n;
    for(i=1;i<=n;i++){
        if(i>=0 && n%i==0){
            cout << i << endl;
        }
    }

    return 0;
}