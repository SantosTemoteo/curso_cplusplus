#include <iostream>
#include <math.h>
using namespace std;
// Bhaskara's Formula
int main(){

    double a, b, c, rootdelta, x1, x2;
    
    cin >> a >>  b >> c;

    rootdelta = sqrt((b*b)-4*a*c);
    
    x1 = (b*-1+rootdelta)/2.0*a;
    x2 = (b*-1-rootdelta)/2.0*a;
    
    if(a == 0 || b == 0 || c == 0 || rootdelta < 0){
        cout << "impossivel calcular" << endl;
    }else{
    cout.precision(5);
    cout << std::fixed << "R1 = " << x1 << endl;
    cout << std::fixed << "R2 = " << x2 << endl;      
    }

    return 0;
}