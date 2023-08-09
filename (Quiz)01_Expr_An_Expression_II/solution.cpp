#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x;
    cin >> x;
    double y = pow(x, sqrt(log(pow(x+1,2))))/(10-x);
    cout << round(y*1e6)/1e6;

    return 0;
}