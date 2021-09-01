#include <iostream>
using namespace std;

int main(){

    int n,i,p;
    cin >> n;

    for(i = 1; i<=10; i++){
        p = i*n;
        cout << i << " x " << n << " = " << p << endl;
    }

    return 0;
}