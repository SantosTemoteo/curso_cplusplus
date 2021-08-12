#include <iostream>

using namespace std;

int main(){

    int val;

    cout << "Selecione uma cor \n";
    cout << "[1, 2, 3] = Verde; [4, 5, 6] = Amarelo; \n";

    cin >> val;

    // também possível fazer switchs simples,
    // blocos de switch e switch aninhado:
    switch(val){
        case 1:  
        case 2:
        case 3:
            cout << "Voce escolheu VERDE! \n";
            switch(val){
                case 1:  
                case 2:
                case 3:
                    cout << "Cores RGB!\n";
                    break;
            }
            break;
        case 4:  
        case 5:
        case 6:
            cout << "Voce escolheu AMARELO! \n";
            switch(val){
                case 4:  
                case 5:
                case 6:
                    cout << "Cores CMYK!\n";
                    break;
            }
            break;

        default:
            cout << "Que cor eh essa !? \n";
    }
    cout << "Programa Finalizado!";
    return 0;

}