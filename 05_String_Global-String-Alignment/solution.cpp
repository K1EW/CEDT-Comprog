#include <iostream>

using namespace std;

int main()
{
    string x,y;
    cin >> x >> y;

    int maxX=0,maxY=0;
    int startX=0,startY=0;

    for (int i=0;i<y.size();i++){
        int cnt=0;
        for (int j=i;j<y.size() && j-i < x.size();j++)
            cnt += x[j-i] == y[j];
        if (cnt > maxX){
            maxX = cnt;
            startX = i;
        }
    }

    for (int i=0;i<x.size();i++){
        int cnt=0;
        for (int j=i;j<x.size() && j-i < y.size();j++)
            cnt += y[j-i] == x[j];
        if (cnt > maxY){
            maxY = cnt;
            startY = i;
        }
    }

    if (maxX >= maxY){
        for (int i=0;i<startX;i++)
            cout << "-";
        cout << x << endl << y << endl << maxX;
    }else{
        cout << x << endl;
        for (int i=0;i<startY;i++)
            cout << "-";
        cout << y << endl << maxY;
    }
    
    return 0;
}