#include <iostream>
using namespace std;

int main(){

    int x,i,x_1=0,sum=0;

    while(x!=0){
        cin >> x;
        if(x!=0){
            if(x%2==0){
                x_1 = x;
                for(i=0;i<5;i++){
                    sum+=x_1;
                    x_1+=2;
                }
            }else{
                x_1 = x+1;
                for(i=0;i<5;i++){
                    sum+=x_1;
                    x_1+=2;
                }
            }
         cout << sum << endl;
         sum=0;
        }
    }

    return 0;
}