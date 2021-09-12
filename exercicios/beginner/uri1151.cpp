#include <iostream>
using namespace std;

int main(){ // 100% Presentation error 

    int n,i,fib[47];

    cin >> n;

    fib[0] = 0;     // serve apenas para preencher o array
    fib[1] = 1;     // serve apenas para preencher o array

    for(i=2;i<n;i++){
        fib[i]=fib[i-1] + fib[i-2];
    }
    cout << "0";
    for(i=1;i<n;i++){
        cout << " " << fib[i];
    }
    return 0;
}