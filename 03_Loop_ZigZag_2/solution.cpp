#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int minZigZag = 1e9, minZagZig = 1e9;
    int maxZigZag = -1e9, maxZagZig = -1e9;
    string x="";
    int cnt=0;
    while (true){
        getline(cin, x);
        if (x == "-998" || x == "-999")
            break;
        int spaceIdx = 0;
        for (int i=0;i<x.size();i++){
            if (x[i] == ' '){
                spaceIdx = i;
                break;
            }
        }
        int a = stoi(x.substr(0,spaceIdx)), b = stoi(x.substr(spaceIdx+1, (int)x.size() - (spaceIdx+1)));
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
    if (x=="-998")
        cout << minZigZag << " " << maxZigZag;
    else
        cout << minZagZig << " " << maxZagZig;

    return 0;
}