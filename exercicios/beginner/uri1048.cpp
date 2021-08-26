#include <iostream>
using namespace std;

int main(){

    double salario, novo_salario, reajuste;
    int percentual;
    cin >> salario;

    if(salario >= 0.00 && salario <= 400.00){
        novo_salario = salario + (salario*15/100);
        reajuste = salario*15/100;
        percentual = 15;

     }else if(salario >= 400.01 && salario <= 800.00){
        novo_salario = salario + (salario*12/100);
        reajuste = salario*12/100;
        percentual = 12;
    
     }else if(salario >= 800.01 && salario <= 1200.00){
        novo_salario = salario + (salario*10/100);
        reajuste = salario*10/100;
        percentual = 10;
    
     }else if(salario >= 1200.01 && salario <= 2000.00){
        novo_salario = salario + (salario*7/100);
        reajuste = salario*7/100;
        percentual = 7;
        
     }else{
        novo_salario = salario + (salario*4/100);
        reajuste = salario*4/100;
        percentual = 4;
    }
    
    cout.precision(2);
    cout << std::fixed << "Novo salario: " << novo_salario << endl;
    cout << std::fixed << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << percentual << " %" << endl;

    return 0;
}