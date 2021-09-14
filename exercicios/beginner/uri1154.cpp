#include <iostream>
using namespace std;

int main(){

    int n, sum=0;
    double cont=0, avg;

    cout.precision(2);
    while(n>=0){
            cin >> n;
        if(n>=0){
            sum += n;
            cont++;
        }
    }
    avg = sum/cont;
    cout << std::fixed << avg << endl;

    return 0;
}