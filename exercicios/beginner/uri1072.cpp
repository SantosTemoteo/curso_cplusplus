#include <iostream>
using namespace std;

int main(){

    int n = 0, in = 0, out = 0, i = 0, f = 0;
    cin >> n;

    for(i; i < n; i++){
        cin >> f;
        
        if(f >= 10 && f <= 20){
            in += 1;
        }else{
            out += 1;
        }
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}