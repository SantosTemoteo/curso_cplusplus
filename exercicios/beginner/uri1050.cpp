#include <iostream>
using namespace std;

int main(){

    int x,y[] = {61,71,11,21,32,19,27,31};
    cin >> x;
    
    if(x == y[0]){cout << "Brasilia" << endl;}
    else if(x == y[1]){cout << "Salvador" << endl;}
    else if(x == y[2]){cout << "Sao Paulo" << endl;}
    else if(x == y[3]){cout << "Rio de Janeiro" << endl;}
    else if(x == y[4]){cout << "Juiz de Fora" << endl;}
    else if(x == y[5]){cout << "Campinas" << endl;}
    else if(x == y[6]){cout << "Vitoria" << endl;}
    else if(x == y[7]){cout << "Belo Horizonte" << endl;}
    else{cout << "DDD nao cadastrado" << endl;}
    
    return 0;
}