#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long double a, x;
    cin >> a;
    long double l=0,u=a;
    x = l + (u - l)/2;
    while (abs(a-pow(10,x)) > pow(10,-10)){
        x = l + (u - l)/2;
        if (pow(10,x) > a)
            u = x;
        else if (pow(10,x) < a)
            l = x;
    }
    cout << x;

    return 0;
}