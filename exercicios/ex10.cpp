#include <iostream>
using namespace std;

// Sphere
int main(){

    double volume,r,constant;
    double pi = 3.14159;
    constant = 4.0/3;

    cin >> r;

    volume = constant * pi * (r*r*r);

    cout.precision(3);
    cout << std::fixed << "VOLUME = " << volume << endl;

    return 0;
}