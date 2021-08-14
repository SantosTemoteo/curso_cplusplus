#include <iostream>
using namespace std;

int main(){
    double A,B,C,m;
    
    cin >> A >> B >> C;

    m = (A*2 + B*3 + C*5)/10;

    cout.precision(1);
    cout << std::fixed << "MEDIA = " << m << endl;

}
//Average2 