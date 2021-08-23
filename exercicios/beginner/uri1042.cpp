#include <iostream>
using namespace std;

        // Simple sort
int main(){

    int a,b,c,x,y,z;
    int temp;
    cin >> a >> b >> c;

    x = a;
    y = b;
    z = c;

    if(x > y){
        temp = x;
        x = y;
        y = temp;   // variavel temp nesse caso, irá receber o valor maior, enquando as outras só irão trocar
    }
    if(x > z){      // os valores das var's serão guardados para serem usados nas próximas condições, caso foram verdadeiras
        temp = x;
        x = z;
        z = temp;
        
    }
    if(y > z){
        temp = y;
        y = z;
        z = temp;
    }

    cout << x << endl << y << endl << z << endl << endl;
    cout << a << endl << b << endl << c << endl;

    return 0;
}