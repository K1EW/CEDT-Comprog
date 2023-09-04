#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double mn = a, mx = a;
    if (mn > a) mn = a;
    if (mn > b) mn = b;
    if (mn > c) mn = c;
    if (mn > d) mn = d;
    
    if (mx < a) mx = a;
    if (mx < b) mx = b;
    if (mx < c) mx = c;
    if (mx < d) mx = d;

    cout << round((a+b+c+d-mx-mn)/2*100.0)/100.0;

    return 0;
}