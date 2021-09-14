#include <iostream>
using namespace std;

int main(){

    int i;
    double s=0,f=1.0;

    cout.precision(2);
    for(i=1;i<=100;i++){
        s+=(1/f);
        f++;
    }
    cout << std::fixed << s << endl;
    return 0;
}