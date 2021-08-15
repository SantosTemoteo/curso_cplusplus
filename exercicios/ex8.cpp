#include <iostream>
using namespace std;

int main(){

    string name;
    double f_salary, sold, total;

    //cin >> name;
    cin >> name >> f_salary >> sold;

    total = f_salary + (sold*15/100);

    cout.precision(2);
    cout << std::fixed << "TOTAL = R$ " << total << endl; 

    return 0;
}