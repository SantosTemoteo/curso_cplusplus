#include <iostream>
using namespace std;

int main(){

    int value, ano, mes;
    cin >> value;

    ano = value/365;
    value = value%365;

    mes = value / 30;
    value = value % 30;

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << value << " dia(s)" << endl;

    return 0;
}