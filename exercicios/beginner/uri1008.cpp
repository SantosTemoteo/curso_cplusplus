#include <iostream>
using namespace std;

    //Salary
int main (){

    int number;
    double month_hour, per_hour, salary;

    cin >> number >> month_hour >> per_hour;
    salary = month_hour * per_hour;

    cout << "NUMBER = " << number << endl;

    cout.precision(2);
    cout<< std::fixed << "SALARY = U$ " << salary << endl;

    return 0;
}