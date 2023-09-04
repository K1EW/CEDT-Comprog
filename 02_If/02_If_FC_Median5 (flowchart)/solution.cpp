#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, temp;
    cin >> a >> b >> c >> d >> e;
    if (a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if (c>d){
        temp = c;
        c = d;
        d = temp;
    }
    if (a>c){
        temp = b;
        b = d;
        d = temp;
        c = a;
    }
    a = e;
    if (a>b){
        temp = a;
        a = b;
        b = temp; 
    }
    if (c>a){
        temp = b;
        b = d;
        d=temp;
        a = c;
    }
    if (a>d)
        cout << d;
    else
        cout << a;

    return 0;
}