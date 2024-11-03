#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double xe, ye, re, rp, xm, ym;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    
    double A = xm-xe, B = ym-ye, C = sqrt(A*A + B*B);
    double a = (re-rp)/C*A, b=(re-rp)/C*B;
    
    cout << round(xe + a) << " " << round(ye + b);

    return 0;
}