#include <iostream>
using namespace std;
        // Game Time
int main(){

    int start, ending, dur;
    cin >> start >> ending;

    if(start < ending){
        dur = ending - start;
        cout << "O JOGO DUROU " << dur << " HORA(S)" << endl;  // O JOGO DUROU 24 HORA(S)
    }else if(start > ending){
        dur = 24 - (start - ending);
        cout << "O JOGO DUROU " << dur << " HORA(S)" << endl;
    }else{
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }

    return 0;
}