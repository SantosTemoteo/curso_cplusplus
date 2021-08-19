#include <iostream>
using namespace std;

int main(){

    int x, y;
    cin >> x >> y;

    cout.precision(2);
    if(x == 1){
        cout << std::fixed << "Total: R$ " << y*4.00 << endl;
    }else if(x == 2){
        cout << std::fixed << "Total: R$ " << y*4.50 << endl;
    }else if(x == 3){
        cout << std::fixed << "Total: R$ " << y*5.00 << endl;
    }else if(x == 4){
        cout << std::fixed << "Total: R$ " << y*2.00 << endl;
    }else{
        cout << std::fixed << "Total: R$ " << y*1.50 << endl;
    }
    
    return 0;
}