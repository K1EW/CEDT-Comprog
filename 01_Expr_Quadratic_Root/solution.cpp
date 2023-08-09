#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a,b,c;
    cin >> a >> b >> c;

    double x1 = (-b - sqrt(b*b - 4*a*c))/(2*a);
    double x2 = (-b + sqrt(b*b - 4*a*c))/(2*a);

    cout << round(x1*1e3)/1e3 << " " << round(x2*1e3)/1e3;

    return 0;
}