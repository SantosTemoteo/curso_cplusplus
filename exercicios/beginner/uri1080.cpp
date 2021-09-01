#include <iostream>
using namespace std;

int main(){

    int n1,i,f = 5,maior = 0, pos = 0; //pos[i]

    for(i = 1; i<=f; i++){
        cin >> n1;
        if(n1 > maior){
            maior = n1;
            pos = i;
        }      
    }
    cout << maior << endl;
    cout << pos << endl;
    return 0;
}