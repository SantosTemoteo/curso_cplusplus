#include <iostream>
using namespace std;

int main(){

    float X,Y,average;

    cin >> X >> Y;

    average = X/Y;

    cout.precision(3);
    cout << std::fixed << average << " km/l" << endl;

    return 0;
}