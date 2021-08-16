#include <iostream>
using namespace std;

int main(){ 

    double A, B, C, ret_tri, a_circle, a_trapez, a_square, a_rectan;
    double pi = 3.14159;

    cin >> A >> B >> C;

    ret_tri = A*C*0.5;
    a_circle = pi * (C*C);
    a_trapez = ((A+B) * C)/2;
    a_square = B*B;
    a_rectan = A*B;

    cout.precision(3);
    cout << std::fixed << "TRIANGULO: " << ret_tri << endl;
    cout << std::fixed << "CIRCULO: " << a_circle << endl;
    cout << std::fixed << "TRAPEZIO: " << a_trapez << endl;
    cout << std::fixed << "QUADRADO: " << a_square << endl;
    cout << std::fixed << "RETANGULO: " << a_rectan << endl;

    return 0;
}