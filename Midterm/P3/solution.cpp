#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double q=0,d=0;
    int n;
    cin >> n;
    while (n--){
        string c;
        int g;
        cin >> c>> g;
        double C;
        if (c=="A") C=4;
        else if (c=="B+") C=3.5;
        else if (c=="B") C=3;
        else if (c=="C+") C=2.5;
        else if (c=="C") C=2;
        else if (c=="D+") C=1.5;
        else if (c=="D") C=1;
        else if (c=="F") C=0;
        q += C*g;
        d += g;
    }

    cout << round(q/d*100)/100;

    return 0;
}