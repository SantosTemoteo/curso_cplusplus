#include <iostream>
using namespace std;

int main(){     // Event Time
    // 100% COPIADO
    int d1,h1,m1,s1;
    int d2,h2,m2,s2;
    string lixo;

    cin >> lixo >> d1 >> h1 >> lixo >> m1 >> lixo >> s1;    // começo e fim dos eventos
    cin >> lixo >> d2 >> h2 >> lixo >> m2 >> lixo >> s2;

    int q1, q2;     // 1º transformando tudo em segundos; q1 = quantidade
    q1 = s1 + m1*60 + h1*3600 + d1*86400;       // 1s = 1s; 1m = 60s; 1h = 3600s; 1d = 86400s
    q2 = s2 + m2*60 + h2*3600 + d2*86400;

    int tempo = q2 - q1;     // tempo de evento

    cout << tempo/86400 << " dia(s)" << endl;
    tempo = tempo%86400;
    cout << tempo/3600 << " hora(s)" << endl;
    tempo = tempo%3600;
    cout << tempo/60 << " minuto(s)" << endl;
    tempo = tempo%60;
    cout << tempo << " segundo(s)" << endl;

    return 0;
}