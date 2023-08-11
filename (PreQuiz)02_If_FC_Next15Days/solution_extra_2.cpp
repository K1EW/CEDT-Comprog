/*This version of the problem is to find the previous 15 days instead of the next 15 days*/

#include <iostream>

using namespace std;

int main(){
    
    int d,m,y;
    cin >> d >> m >> y;
    y-=543;
    int n=31;
    d = d - 15;
    if (d < 1){
        m--;
        if (m < 1){
            m=12;
            y--;
        }
    }
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
    if (d < 1)
        d += n;
    y += 543;
    cout << d << "/" << m << "/" << y;

    return 0;
}