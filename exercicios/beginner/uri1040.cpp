#include <iostream>
using namespace std;

        // Average 3
int main(){
    
    double n1, n2, n3, n4, media;
    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1*2 + n2*3 + n3*4 + n4*1)/10;    // 2,3,4,1 respectively weights
    
    cout.precision(1);
    cout << std::fixed << "Media: " << media << endl; 
   
    if(media >= 7){
        cout << "Aluno aprovado." << endl;
    }
    if(media < 5){
        cout << "Aluno reprovado." << endl;
    }
    if(media >= 5 && media <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> n1;
        cout << "Nota do exame: " << n1 << endl;
        media = (media+n1)/2;

            if(media >= 5){
                cout << "Aluno aprovado." << endl;
            }else{
                cout << "Aluno reprovado." << endl;
            }

        cout << std::fixed << "Media final: " << media << endl;

    }

    return 0;
}