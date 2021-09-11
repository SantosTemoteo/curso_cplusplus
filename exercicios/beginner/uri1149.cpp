#include <iostream>
using namespace std;

int main(){

    int n,a,i,j=0;
    cin >> a >> n;
    while(n<=0){
        cin >> n;
    }
    for(i=0; i<n; i++){
        j+=(a+i);
    }
    cout << j << endl;
    return 0;
}