#include <iostream>

using namespace std;

int main(){

    int cont;
    cont = 0;
    while(cont++ <= 10) { // incremento dentro da rotina while
        cout << "Bart Simpson - " << cont << "\n";
         // cont ++; // incremento dentro do bloco
        if(cont == 10){
            break;
        }
    }
    cout << "Fim\n";


    return 0;
}