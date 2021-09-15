#include <iostream>
using namespace std;

int main(){

    int n,i,j,x,y,temp=0, x_1=0, sum=0;
    cin >> n;

    for(i=0; i<n; i++){
        int lista[]={};
        x = lista[0];
        y = lista[1];
        cin >> x >> y;

        if(x%2==0){
                x_1=x+1;
            for(j=0; j<y; j++){
                sum +=x_1;
                x_1+=2;
            }
        }else{
                x_1=x;
            for(j=0; j<y; j++){
                sum+=x_1;
                x_1+=2;
            }
        }
        cout << sum << endl;
        sum = 0;
    }

    return 0;
}