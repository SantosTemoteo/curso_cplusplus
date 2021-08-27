#include <iostream>
using namespace std;

int main(){     // Taxes "imposto de renda" 100% COPIADO

    double salario, imposto, diferenca;
    imposto = 0;    // imposto a ser pago pela pessoa
    cin >> salario;

    cout.precision(2);
    if(salario > 4500){
        imposto = 1000*0.08 + 1500*0.18;
        diferenca = salario - 4500;
        imposto += diferenca* 0.28;
    }
    else if(salario > 3000){
        imposto = 1000*0.08;
        diferenca = salario - 3000;
        imposto += diferenca*0.18;
    }
    else if(salario > 2000){
        diferenca = salario - 2000;
        imposto = diferenca*0.08;
    }
    if(imposto > 0){
        cout << std::fixed << "R$ " << imposto << endl;
    }else{
    cout << "Isento" << endl;
    }
    return 0;
}