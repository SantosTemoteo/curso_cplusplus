#include <iostream>
using namespace std;
// Time Conversion
int main(){

    int n, q_horas, q_minutos, q_segundos;

    cin >> n;
    q_horas = n/3600;
    n = n % 3600;

    q_minutos = n/60; // esse eu não entendi nada :(
    n = n % 60;

    cout << q_horas << ":" << q_minutos << ":" << n << endl;

    return 0;
}