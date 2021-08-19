#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){

    float n1,n2,res;
    char opc;

    inicio:
    system("cls");

    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;

    res = (n1+n2)/2;

    cout << "médio = "<< res << "\n";

    if(res >= 7){
        cout << "Aprovado \n";
    }else if(res <= 5){
        cout << "Reprovado \n";
    } else{
        cout << "Recuperação\n";
    }


    cout << "Digitar mais notas? [s/n]: ";
    cin >> opc;

    if (opc == 's' or opc == 'S'){
        goto inicio;
    }
    return 0;
}