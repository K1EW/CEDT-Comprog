#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double u, theta, t;
    cin >> u >> theta >> t;
    double h = (t-(u*sin(M_PI*theta/180))/10)*(u*sin(M_PI*theta/180)+0.5*10*(t-3*u*sin(M_PI*theta/180)/10));
    double r = u*cos(M_PI*theta/180)*t;

    cout << round(h*10)/10 << " " << round(r*10)/10;

    return 0;
}