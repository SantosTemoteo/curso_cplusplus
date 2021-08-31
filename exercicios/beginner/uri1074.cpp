#include <iostream>
using namespace std;

int main(){         // Even or Odd 100% COPIADO  
    int n,i,f;
    cin >> n;

    for(i=1; i<=n; i++){
        cin >> f;
        if(f == 0){
            cout << "NULL" << endl;
        }else{ 
            if(f%2 == 0){
                cout << "EVEN ";
            }else{
                cout << "ODD ";
            }
            if(f>0){
                cout << "POSITIVE" << endl;
            }else{
                cout << "NEGATIVE" << endl;
            }
        }
    }
      
    return 0;
}