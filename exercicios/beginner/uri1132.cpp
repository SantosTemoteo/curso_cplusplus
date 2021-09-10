#include <iostream>
using namespace std;

int main(){

    int x,y,swap,i,sum=0;
    cin >> x >> y;
    if(x>y){
        swap=x;
        x=y;
        y=swap;
    }
    for(i=x;i<=y;i++){
        if(i%13!=0){
            sum+=i;
        }
    }
    cout << sum << endl;

    return 0;
}