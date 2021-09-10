#include <iostream>
using namespace std;

int main(){

    int j=0,i=1,a[3] = {0,0,0},gremio=0,inter=0,maior;
    while(i!=2){
        if(i==1){
            cin >> inter >> gremio;
            if(inter == gremio){
                a[2]+=1;
            }else if(inter > gremio){
                a[0]+=1;
            }else if(inter < gremio){
                a[1]+=1;
            }
            maior=a[0];
            if(a[1]>maior){maior=a[1];}
            else if(a[2]>maior){maior = a[2];}
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            j++;    
            cin >> i;
        }
    }   
    cout << j << " grenais" << endl;
    cout << "Inter:" << a[0] << endl;
    cout << "Gremio:" << a[1] << endl;
    cout << "Empates:" << a[2] << endl;
    if(a[0] == maior){
        cout << "Inter venceu mais" << endl;
    }else if(a[1] == maior){
        cout << "Gremio venceu mais" << endl;
    }

    return 0;
}