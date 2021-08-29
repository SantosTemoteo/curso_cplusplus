#include <iostream>
using namespace std;

int main(){

    int i,j;
    double a,s,m;

    s = 0;
    j = 0;
    for(i = 0; i < 6; i++){
        cin >> a;
        if(a > 0){
            j += 1;
            s += a;
        }
    }
    cout.precision(1);
    m = s/j;
    cout << std::fixed << j << " valores positivos" << endl;
    cout << std::fixed << m << endl;

    return 0;
}