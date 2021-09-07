#include  <iostream>
using namespace std;

int main(){         // 60% COPIADO

    int n,i,j,x,y,temp,sum=0,lista;

    cin >> n;
    for(i=0;i<n;i++){
        int lista[] = {};   // cria-se array
        x = lista[0];       // x no índice 0 do array
        y = lista[1];       // y no índice 1 do array
        cin >> x >> y;
        if(x>y){            // troca, y fica maior
            temp=x;
            x=y;
            y=temp;
        }
        for(j=x+1;j<y;j++){     // j recebe x(par ou ímpar)+1; que quando incrementado, fica par, ou ímpar.
            if(j%2 != 0){       // sendo ímpar, soma.
            sum+=j;
            }
        }
        cout << sum << endl;
        sum=0;                  // final, soma é resetada
    }
    return 0;
}