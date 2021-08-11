#include <iostream>

using namespace std;

int main (){

    int num = 10;

    cout << num << "\n\n";
    
    // num *= -1; //método tradicional de inversão, multiplica-se o valor da variável por -1
    num = -num;
     cout << -num << "\n"; // operador de inversão, não grava o valor na variável, só faz a inversão momentâneamente
     cout << num << "\n";


    return 0;
}