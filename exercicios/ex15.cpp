#include <iostream>
#include <math.h>
using namespace std;

int main(){

    double x1,y1,x2,y2,distance;
    
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    cout.precision(4);
    cout << std::fixed << distance << endl;

    return 0;
}