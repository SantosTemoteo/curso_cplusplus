#include <iostream>
using namespace std;

int main(){

    int x,i;
    while(x!=0){
        cin >> x;
        if(x==0){
            break;
        }else{
        x-=1;
            for(i=1;i<=x;i++){
                cout << i << " ";
                if(i==x){
                    i+=1;
                    cout << i << endl;
                }
            }
        i=1;
        }
    }

    return 0;
}