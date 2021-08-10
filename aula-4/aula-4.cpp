#include <iostream>

using namespace std;

int main(){
    int vidas=0;  // tipo nome;
                // tipo nome = valor_inicial;
    char letra='b';     // 'B' = 1 byte somente 1 caracter
    char letras[20];    // passa a ser um vetor, podendo adicionar mais letras com até 20 caracteres
    double decimal=5.29999;     // tipo float, 2.4999999999
    float decimal2=5.3;     // 2.5 (arredondado)
    bool high_or_low=true;   // true or false, imprime 1
    string nome="palavra";    // recebe um texto maior "palavra"

    // ***cin = atribuição de entrada, << (escreva)
    // ****cout = atribuição de saída, >> (leia)

    cout << "Digite o número de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Agora um valor em dinheiro, R$: ";
    cin >> decimal;
    cout << "Digite seu nome: ";
    cin >> nome;


    cout << vidas << "\n";      // imprime os valores das respectivas variáveis
    cout << letra << "\n";          
    cout << letras << "\n";
    cout << decimal << "\n";
    cout << decimal2 << "\n";
    cout << high_or_low << "\n";
    cout << nome << "\n";

    return 0;
}