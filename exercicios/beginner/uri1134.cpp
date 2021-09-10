#include <iostream>
using namespace std;

int main(){

    int n, i=1, a[3]={0,0,0};
    cin >> n;
    
    while(n!=4){
    
        if(n==1){
            a[0]+=1;
        } 
        if(n==2){
            a[1]+=1;
        }
        if(n==3){
            a[2]+=1;
        }else{
            cin >> n;
        }
    }
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alchol: " << a[0] << endl;
    cout << "Gasolina: " << a[1] << endl;
    cout << "Deisel: " << a[2] << endl;

    return 0;
}