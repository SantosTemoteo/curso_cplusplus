#include <iostream>
using namespace std;

int main(){

    int n,i;
    double div,x,y;
    cin >> n;
    cout.precision(1);
    for(i=0; i<n; i++){
        cin >> x >> y;
        if(x==0){
            div= 0;
            cout << std::fixed << div << endl;
        }else if(y==0){
            cout << "divisao impossivel" << endl;
        }else{
            div = x/y;
            cout << std::fixed << div << endl;
        }
    }

    return 0;
}