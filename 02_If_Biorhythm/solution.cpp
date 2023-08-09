#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int d1,m1,y1,d2,m2,y2,t=0;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;

    /*in progress*/

    double phy = sin((2*M_PI*t)/23), emo = sin((2*M_PI*t)/28), intel =sin((2*M_PI*t)/33);

    cout << t << " " << round(phy*100.0)/100.0 << " " << round(emo*100.0)/100.0 << " " << round(intel*100.0)/100.0;

    return 0;
}