#include <iostream>

using namespace std;

int main (){

    int cont;
    cont = 0;

    while(cont <= 100){
        cout << cont << "\n";
        if(cont == 50){
            break;
        }
        cont++; // precisa por em baixo para que o 50 seja impresso.
    }

    return 0;
}