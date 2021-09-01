#include <iostream>
using namespace std;

int main(){

    int n,i,x,ratos = 0,sapos = 0,coelhos = 0,cobaias = 0;
    double p_coelhos,p_ratos,p_sapos;
    char j[2];
    
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x >> j;
        if(j[0] == 'c' || j[0] == 'C'){
            coelhos += x;
        }else if(j[0] == 'r' || j[0] == 'R'){
            ratos += x;
        }else if(j[0] == 's' || j[0] == 'S'){
            sapos += x;
        }
        cobaias = coelhos + ratos + sapos;
    }
    cout << "Total: " << cobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    
    return 0;
}