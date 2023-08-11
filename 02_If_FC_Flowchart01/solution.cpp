#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a>b){
        int temp = a;
        a = b;
        b = temp;
        if (d>=a){
            if (c>d)
                c -= a;
        }else c += a;
        b = a+c+d;
    }else{
        if (c>a && a>=b) d += a;
        else{
            if (d>c) b += 2;
            else b *= 2;
        }
    }
    cout << a << " " << b << " " << c << " " << d;

    return 0;
}