#include <iostream>

using namespace std;

int main(){

    float n1, n2, media;
    string res;

    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;

    media = (n1+n2)/2;

   // (media >= 7 ) ? res = "Aprovado" : res = "Reprovado";     //  ternário direto
    res = (media >= 7) ? "Aprovado" : "Reprovado";   // retorno ternário
    cout << res;

    return 0;
}