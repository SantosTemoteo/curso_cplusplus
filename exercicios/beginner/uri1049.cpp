#include <iostream>

using namespace std;
    
int main(){     // Animal

    char a[15], b[15], c[15];   // vetor de 1 índice com 15 caracteres
    cin >> a >> b >> c;

    if(a[0] == 'v'){    // apóstrofo delimita um único caractere
        if(b[0] == 'a'){
            if(c[0] == 'c'){
                cout << "aguia" << endl;
            }else{
                cout << "pomba" << endl;
            }
        }else{
            if(c[0] == 'o'){
                cout << "homem" << endl;
            }else{
                cout << "vaca" << endl;
            }
        }
    }else{
        if(b[0] == 'i'){
            if(c[2] == 'm'){    // se no índice 2 for 'm'
                cout << "pulga" << endl;
            }else{
                cout << "lagarta" << endl;
            }
        }else{
            if(c[0] == 'h'){
                cout << "sanguessuga" << endl;
            }else{
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}