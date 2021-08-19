#include <iostream>
using namespace std;

int main(){

    lop:
    int num;
    char opc;
    /*1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
     3 a 6
    10 a 14
    16 a 18
    */
    cout << "Digite um numero: ";
    cin >> num;

    if(num >= 3 && num <= 6 || num >= 10 && num <= 14 || num != 19){
        cout << "Valor aceito \n";
    }else{
        cout << "NÃO aceito \n";  
    }

    cout << "Outro? [s/n]";
    cin >> opc;

    if(opc == 's' || opc == 'S' || num != 19){
        goto lop;
    }

    return 0;
}