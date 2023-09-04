#include <iostream>
#include <cmath>

using namespace std;

int main(){

    long double n;
    cin >> n;
    if (n >= 1e10){
        n /= 1e9;
        n = round(n);
        cout << n << "B";
    }else if (n >= 1e9){
        n /= 1e9;
        n = round(n*10.0)/10.0;
        cout << n << "B";
    }else if (n >= 1e7){
        n /= 1e6;
        n = round(n);
        cout << n << "M";
    }else if (n >= 1e6){
        n /= 1e6;
        n = round(n*10.0)/10.0;
        cout << n << "M";
    }else if (n >= 1e3){
        if (n>=1e4){
            n /= 1e3;
            n = round(n);
        }
        else{
            n /= 1e3;
            n = round(n*10.0)/10.0;
        }
        cout << n << "K";
    }else{
        cout << n;
    }

    return 0;
}