#include <iostream>

using namespace std;

int main(){
    int d, m, y, t=0;
    cin >> d >> m >> y;
    
    y -= 543;
    t+=d;
    if (m>1) t += 31;
    if (m>2) t += 28;
    if (m>3) t += 31;
    if (m>4) t += 30;
    if (m>5) t += 31;
    if (m>6) t += 30;
    if (m>7) t += 31;
    if (m>8) t += 31;
    if (m>9) t += 30;
    if (m>10) t += 31;
    if (m>11) t += 30;

    if (m>2 && ((y%4==0 && y%100!=0) || y%400==0)) t++;

    cout << t;

    return 0;
}