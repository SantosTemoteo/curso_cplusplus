#include <iostream>
using namespace std;

        //triangle
int main(){

    double a,b,c,per,area;
    cin >> a >> b >> c;

    cout.precision(1);
    if(a+b > c && a+c > b && b+c > a){

        per = a+b+c;
        cout << std::fixed << "Perimetro = " << per << endl;
    }else{
        area =((a+b)*c)/2;
        cout << std::fixed << "Area = " << area << endl;
    }

    return 0;
}