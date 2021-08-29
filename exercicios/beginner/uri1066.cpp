#include <iostream>
using namespace std;

int main(){

    int a, cont, p = 0, i = 0, pos = 0, neg = 0;

    for(cont = 0; cont < 5; cont++){
        cin >> a;

        if(a%2 == 0){p++;}
        if(a%2 == 1 || a%2 == -1){i++;}
        if(a > 0){pos++;}
        if(a < 0){neg++;}
        
    }

    cout << p << " valor(es) par(es)" << endl;
    cout << i << " valor(es) impar(es)" << endl;
    cout << pos << " valor(es) positivo(s)" << endl;
    cout << neg << " valor(es) negativo(s)" << endl;

    return 0;
}