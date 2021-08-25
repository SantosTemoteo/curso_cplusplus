#include <iostream>
using namespace std;

int main(){

    int initial_hour, initial_minute, final_hour, final_minute, r_hour, r_min;
    cin >> initial_hour >> initial_minute >> final_hour >> final_minute;

    r_hour = final_hour - initial_hour;
    r_min = final_minute - initial_minute;      // para os minutos iremos ter uma consideração parecida, só que com 60

    if(r_hour < 0){     // hora negativa, ou seja, passou-se um dia.
        r_hour += 24;
    }
    if(r_min < 0){
        r_hour += 60;    // incrementa 60 min 
        r_min -= 1;     // e dencrementa 1h, necessário para que diminua 1 min do algoritmo
    }
    if(r_min == 0 && r_hour == 0){
        r_hour = 24;
        r_min = 0;
        cout << "O JOGO DUROU " << r_hour << " HORA(S) E " << r_min << " MINUTO(S)" << endl;
    }else{
        cout << "O JOGO DUROU " << r_hour << " HORA(S) E " << r_min << " MINUTO(s)" << endl;
    }                    
    return 0;
}