#include <iostream>
using namespace std;

int main(){         // Finalmente uma pra sair dessa ZIKA >:(

    int n,i,fa;
    cin >> n;
    fa = n;
    for(i=1; i<n; i++){
        fa*=i;
    }
    cout << fa << endl;
    return 0;
}