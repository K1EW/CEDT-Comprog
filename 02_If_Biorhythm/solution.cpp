#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int d1,m1,y1,d2,m2,y2,t=0;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    
    y1-=543, y2-=543;
    if (m1 <= 12) t+=31;
    if (m1 <= 11) t+=30;
    if (m1 <= 10) t+=31;
    if (m1 <= 9) t+=30;
    if (m1 <= 8) t+=31;
    if (m1 <= 7) t+=31;
    if (m1 <= 6) t+=30;
    if (m1 <= 5) t+=31;
    if (m1 <= 4) t+=30;
    if (m1 <= 3) t+=31;
    if (m1 <= 2) t+=28;
    if (m1 <= 1) t+=31;
    t += (m1 <= 2 && ((y1%4==0 && y1%100!=0) || y1%400==0));
    t -= (d1-1);

    t += 365*(y2-y1-1);

    if (m2 > 1) t+=31;
    if (m2 > 2) t+=28;
    if (m2 > 3) t+=31;
    if (m2 > 4) t+=30;
    if (m2 > 5) t+=31;
    if (m2 > 6) t+=30;
    if (m2 > 7) t+=31;
    if (m2 > 8) t+=31;
    if (m2 > 9) t+=30;
    if (m2 > 10) t+=31;
    if (m2 > 11) t+=30;
    t += (m1 > 2 && ((y2%4==0 && y2%100!=0) || y2%400==0));
    t += (d2-1);

    double phy = sin((2*M_PI*t)/23), emo = sin((2*M_PI*t)/28), intel =sin((2*M_PI*t)/33);
    cout << t << " " << round(phy*100.0)/100.0 << " " << round(emo*100.0)/100.0 << " " << round(intel*100.0)/100.0;

    return 0;
}