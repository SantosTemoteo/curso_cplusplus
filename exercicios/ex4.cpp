#include <iostream>
using namespace std;

int main(){

    float A,B,m;
    cin >> A;
    cin >> B;
    cin.precision(1);

    m = (A*3.5+B*7.5)/11;   //novo jeito de calcular media, considerando mínimo3.5 e medio 7.5 / soma deles
    cout.precision(5);
    cout <<std::fixed<< "MEDIA = " << m << endl; // quantos números atras da vírgula

    return 0;
}
//Average1