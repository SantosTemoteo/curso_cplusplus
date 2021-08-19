#include <iostream>
using namespace std;

int main(){

    int a, b;
    float res;
    cin >> a >> b;

    res = (a*b)/12.0; // tem que por 12.0 pra var entender como float

    cout.precision(3);
    cout << std::fixed << res << endl;

    return 0;
}