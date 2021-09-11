#include <iostream>
using namespace std;

int main(){     // 100% COPIADO

    int x,z,a=1,c=0,i;          // a representa o montante dos números na soma até ultrapassar Z.
    cin >> x;
    cin >> z;

    while(z<=x){
        cin >>z;            // quando z>x, a ja irá contar 1.
    }
    for(i=x;i<=z;i++){
        c+=i;               // contagem validadora para o loop abaixo
        if(c>z){
            break;
        }
        a++;                // a=1, soma-se a++;
    }
    cout << a << endl;      // final printa o montande até ultrapassar Z
    return 0;
}