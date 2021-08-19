#include <iostream>
using namespace std;

    // Banknotes and Coins 100% COPIADO da ÍNDIA
int main(){

    double N;
    cin >> N;
    cout.precision(2);
    int ponte = N*100;      // gambi pra usar o double pro int
    int n = ponte/100;
    int c = ponte%100;      

    cout << "NOTAS:" << endl;
    int notas[6] = {100, 50, 20, 10, 5, 2};     // array com 6 ídices com os valores das NOTAS

    for (int i = 0; i < 6; i++){    // var i, enquanto i < 6(nº de ídices), incrementa i
        cout << std::fixed << n/notas[i] << " nota(s) de R$ " << notas[i] << ".00" << endl;   // printa e divide pelo array(NOTAS) no índice de i
        n = n%notas[i];      // n recebe modulo dos valores do array(notas), (1º loop = divide por cem, os outros divide pelo módulo)
    }

    c = n*100 + c; // nao entendi muito bem, mas isso aqui deve arredondar pois o calculo não bate

    cout << "MOEDAS:" << endl;
    int moedas[6] = {100, 50, 25, 10, 5, 1};     // array com 6 ídices com os valores das MOEDAS
    for (int i = 0; i < 6; i++){    // var i, enquanto i < 6(nº de ídices), incrementa i
        
        cout << std::fixed << c/moedas[i] << " moeda(s) de R$ " << moedas[i]/100.0 << endl;   // divide pelo array(MOEDAS) no índice de i e printa o decimal
        c = c%moedas[i];      // n recebe modulo dos valores do array(notas), (1º loop = divide por cem, os outros divide pelo módulo)
    }

    return 0;
}