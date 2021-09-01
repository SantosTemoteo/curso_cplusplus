#include <iostream>
using namespace std;

int main(){

    int n,i,x;
    double ratos = 0,sapos = 0,coelhos = 0,cobaias = 0;
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
        p_coelhos = (coelhos/cobaias)*100;
        p_ratos = (ratos/cobaias)*100;
        p_sapos = (sapos/cobaias)*100;
    }
    cout << "Total: " << cobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout.precision(2);
    cout << std::fixed << "Percentual de coelhos: " << p_coelhos << " %" << endl;
    cout << std::fixed << "Percentual de ratos: " << p_ratos << " %" << endl;
    cout << std::fixed << "Percentual de sapos: " << p_sapos << " %" << endl;
    
    return 0;
}