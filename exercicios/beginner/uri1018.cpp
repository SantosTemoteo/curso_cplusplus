#include <iostream>
using namespace std;

int main(){

    int value, n_100, n_50, n_20, n_10, n_5, n_2 , n_1;

    cin >> value;
    cout << value << endl;

    n_100 = value/100;
    value = value%100;

    n_50 = value/50;
    value = value%50;

    n_20 = value/20;    // QUE NEGÓCIO CHATO KKKkkJJ
    value = value%20;   // entendi mas não entendi kkkkk

    n_10 = value/10;    // o valor da variável passa a ser o resto da divisão
    value = value%10;

    n_5 = value/5;
    value = value%5;

    n_2 = value/2;
    value = value%2;

    n_1 = value/1;
    value = value%1;

    cout.precision(2);
    cout << std::fixed << n_100 << " nota(s) de R$ 100,00" << endl;
    cout << std::fixed << n_50 << " nota(s) de R$ 50,00" << endl;
    cout << std::fixed << n_20 << " nota(s) de R$ 20,00" << endl;
    cout << std::fixed << n_10 << " nota(s) de R$ 10,00" << endl;
    cout << std::fixed << n_5 << " nota(s) de R$ 5,00" << endl;
    cout << std::fixed << n_2 << " nota(s) de R$ 2,00" << endl;
    cout << std::fixed << n_1 << " nota(s) de R$ 1,00" << endl;
    
    return 0;
}