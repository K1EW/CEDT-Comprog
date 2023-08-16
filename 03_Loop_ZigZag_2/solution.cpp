#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int minZigZag = 1e9, minZagZig = 1e9;
    int maxZigZag = -1e9, maxZagZig = -1e9;
    string x="";
    int cnt=0;
    int a,b;
    while (true){
        cin >> a;
        if (a==-998 || b==-999)
            break;
        cin >> b;
        if (cnt%2==0){
            minZigZag = min(minZigZag, a);
            minZagZig = min(minZagZig, b);
            maxZigZag = max(maxZigZag, b);
            maxZagZig = max(maxZagZig, a);
        }else{
            minZigZag = min(minZigZag, b);
            minZagZig = min(minZagZig, a);
            maxZigZag = max(maxZigZag, a);
            maxZagZig = max(maxZagZig, b);
        }
        cnt++;
    }
    if (a==-998)
        cout << minZigZag << " " << maxZigZag;
    else
        cout << minZagZig << " " << maxZagZig;

    return 0;
}