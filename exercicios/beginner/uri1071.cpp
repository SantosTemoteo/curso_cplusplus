#include <iostream>
using namespace std;

int main(){     // Sum of Consecutive Odd Numbers I

    int x,y,i,temp, soma = 0;
    cin >> x >> y;

    if(x > y){      // se x for maior; troca. que doidera vey...
        temp = y;
        y = x;
        x = temp;
    }
    for(i = x+1; i < y; i++){       // somar número ENTRE x e y
        
        if(i%2 != 0){       // se for impar
            soma += i;
        }
    }
    cout << soma << endl;

    return 0;
}