#include <iostream>
using namespace std;

int main(){ // 100% Presentation error 

    int n,i,fib[47];

    cin >> n;

    fib[0] = 0;
    fib[1] = 1;

    cout << fib[0]<< " ";
    cout << fib[1]<< " ";

    for(i=2;i<n;i++){
        fib[i]=fib[i-1] + fib[i-2];
        cout << fib[i] << " ";
    }
    cout << endl;
    return 0;
}