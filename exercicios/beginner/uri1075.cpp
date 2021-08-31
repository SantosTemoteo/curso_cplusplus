#include <iostream>
using namespace std;

int main(){

    int n,i,f = 10000;
    cin >> n;
    
    for(i = 1; i <= f; i++){
        if(i%n == 2){
            cout << i << endl;
        }
    }
    return 0;
}