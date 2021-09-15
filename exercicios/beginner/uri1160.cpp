#include <iostream>
using namespace std;

int main(){     // 100% copy

    int t,i;
    int pa,pb,anos=0;     // população a; polulação b.
    double g1,g2;                   // taxas de crecimento.
    cin >> t;                       // test cases.
    for(i=0;i<t;i++){

        cin >> pa >> pb >> g1 >> g2;
        while(1){                   // loop até pa > pb.
            pa += (pa*g1)/100;
            pb += (pb*g2)/100;
            anos+=1;                // contagem de anos para pa ultrapassar pb.
            if(pa>pb||anos>100){    // quando pa>pb: 
                break;              // anula o while.
            }
        }
        if(anos<=100){
            cout << anos << " anos." << endl;
        }else{
            cout << "Mais de 1 seculo." << endl;
        }
    }
    return 0;
}