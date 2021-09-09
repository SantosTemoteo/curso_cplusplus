#include <iostream>
using namespace std;

int main(){         // 100% COPIADO    

    double score,sum=0;
    int count=0;
    while(count<2){
        cin >> score;
        if(score < 0.0 || score > 10.0){
            cout << "nota invalida" << endl;
        }else{
            count++;
            sum+=score;
        }
    }
    cout << "media = " << sum/2 << endl;

    return 0;
}