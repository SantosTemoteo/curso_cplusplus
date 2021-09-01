#include <iostream>
using namespace std;

int main(){

    int n,i;
    float n1,n2,n3,media;

    cin >> n;
    cout.precision(1);
    for(i=0; i<n; i++){
        
        cin >> n1 >> n2 >> n3;   
        media = (n1*2 + n2*3 + n3*5)/10;
        cout << std::fixed << media << endl;
    }

    return 0;
}