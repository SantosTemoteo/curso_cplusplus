#include <iostream>
using namespace std;

int main(){ // +-12% COPIADO

    float j,i,f,g;

    for(i=0.0; i<=2.2; i+=0.2){
        for(j=1.0; j<=3.0; j++){

                cout << "I=" << i;
                cout << " j=" << j+i << endl;       // fiz tudo isso e não me atentei ao j+i
        }
    }
    return 0;
}