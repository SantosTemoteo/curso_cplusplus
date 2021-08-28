#include <iostream>
using namespace std;

int main(){

    int i,j;
    double a;

    j = 0;
    for(i = 0; i < 6; i++){
        cin >> a;
        if(a > 0){
            j += 1;
        }
    }
    cout << j << " valores positivos" << endl;

    return 0;
}