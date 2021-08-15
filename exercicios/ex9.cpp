#include <iostream>
using namespace std;

int main(){

    int code_1, unit_1, code_2, unit_2;
    double price_1, price_2, total;

    cin >> code_1 >> unit_1 >> price_1;
    cin >> code_2 >> unit_2 >> price_2;

    total = unit_1 * price_1 + unit_2 * price_2;

    cout.precision(2);
    cout << std::fixed << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}