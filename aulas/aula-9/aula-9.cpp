#include <iostream>

using namespace std;

int main (){

    int num1;
    int num2;
    char opc='s';
    
    cout << "num1: ";
    cin >> num1;
    cout << "num2: ";
    cin >> num2;

    if(num1 < num2){
        cout << "Res = TRUE";

    }else{
        cout << "res = FALSE";
    }




    return 0;
}