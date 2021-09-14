#include <iostream>
using namespace std;


int main(){ // 100 copy

    int i;
    double s=0,f=1.0;

    cout.precision(2);
    for(i=1;i<=39;i+=2){
        s+=(i/f);
        f = (f+f);
    }
    cout << std::fixed << s << endl;
    return 0;
}