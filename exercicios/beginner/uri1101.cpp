#include <iostream>
using namespace std;

int main(){

    int i,x,y,temp,sum=0;       // x,y=1 GAMBIARRA

    while (true){             // GAMBIARRA
        cin >> x >> y;
        if(x<=0 || y<=0){
            break;
        }else{
            if(x>y){temp=x; x=y; y=temp;}
            for(i=x; i<=y; i++){
                cout << i << " ";
                sum+=i;
            }
            cout << "Sum=" << sum << endl;
            sum=0;
        }
    }
    

    return 0;
}