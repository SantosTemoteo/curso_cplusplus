#include <iostream>
using namespace std;
        // triangle types
int main(){

    double a,b,c,temp;
    cin >> a >> b >> c;

    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
    if(a < c){
        temp = a;
        a = c;
        c = temp;
    }
    if(b < c){
        temp = b;
        b = c;
        c = temp;
    }

    if(a >= b+c){cout << "NAO FORMA TRIANGULO" << endl;}
    else{
        if(a*a == b*b + c*c){cout << "TRIANGULO RETANGULO" << endl;}
        if(a*a > b*b + c*c){cout << "TRIANGULO OBTUSANGULO" << endl;}
        if(a*a < b*b + c*c){cout << "TRIANGULO ACUTANGULO" << endl;}
        if(a == b && b == c && c == a){cout << "TRIANGULO EQUILATERO" << endl;}
        if((a == b && a !=c)||(b == c && b != a)||(c == a && c != b)){cout << "TRIANGULO ISOSCELES" << endl;}
    }
    return 0;
}