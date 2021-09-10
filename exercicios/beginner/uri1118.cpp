#include <iostream>
using namespace std;

int main(){         // 100% COPIADO

    int j=0,i=1;                        // j determina quantos números válidos serão acrescentados no vetor a. i recebe 1 por default.
    float a[2], n, media;               // vetor a[2] 2 índices.
    cout.precision(2);
    while(i!=2){
        if(i==1){                       // cond. necessária para execução das próximas rotinas.
            while(j<=1){
                cin >> n;               // ler um valor.
                if(n>=0&&n<=10){        // se for válido.
                    a[j]=n;             //  vetor a[] recebe n, no índice do valor de j.
                    j++;                // j incrementado, indicando que 1 valor VÁLIDO foi lido.
                }else{
                    cout << "nota invalida" << endl;
                }
            }
            media = (a[0]+a[1])/2;      // media dos 2 valores VÁLIDOS acrescentados aos índices de a[].
            cout << "media = " << std::fixed << media << endl;
        }
        cout << "novo calculo (1-sim 2-nao)" << endl;
        cin >> i;
        j=0;                            // j resetado, para que; caso i==1, reexecute as rotinas acima (linha 14).
    }

    return 0;
}