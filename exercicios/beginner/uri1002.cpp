#include <iostream>
using namespace std;

// Area of a circle
int main (){
    
    double R,A,n;   // limite maior para entrada de valores
    n = 3.14159;
    cin >> R;
    A = n*(R*R);
    cout.precision(4);  // limitador de casas decimais
    cout<<std::fixed<<"A="<<A<<endl;

    return 0;
}