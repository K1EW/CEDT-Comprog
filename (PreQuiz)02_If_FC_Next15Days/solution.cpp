#include <iostream>

using namespace std;

int main(){
    
    int d,m,y;
    cin >> d >> m >> y;
    y-=543;
    int n=31;
    if (m==4 || m==6 || m==9 || m==11){
        n = 30;
    }else{
        if (m==2){
            n = 28;
            if ((y%4==0 && y%100!=0) || y%400 == 0){
                n = 29;
            }
        }
    }
    d = d + 15;
    if (d>n){
        d -=n;
        m++;
    }
    if (m > 12){
        m-=12;
        y++;
    }
    y += 543;
    cout << d << "/" << m << "/" << y;

    return 0;
}