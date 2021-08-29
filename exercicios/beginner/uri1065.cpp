#include <iostream>
using namespace std;

int main(){

    int i, j, a;

    j = 0;
    for(i = 0; i < 5; i++){
        cin >> a;
        if(a%2 == 0){ // valores negativos tambem podem ser divisíveis por 2
            j += 1;
        }
    }
    cout << j << " valores pares" << endl;

    return 0;
}