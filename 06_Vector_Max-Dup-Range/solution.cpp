#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> a;
    int x;
    while(cin >> x)
        a.push_back(x);
    int maxDup=1, cnt=1;
    for (int i=1;i<a.size();i++){
        if (a[i] == a[i-1]) cnt++;
        else{
            maxDup = max(maxDup, cnt);
            cnt=1;
        }
    }
    maxDup = max(maxDup, cnt);
    cnt=1;
    vector<int> cnd;
    for (int i=1;i<a.size();i++){
        if (a[i]==a[i-1]) cnt++;
        else{
            if (cnt == maxDup)
                cnd.push_back(a[i-1]);
            cnt=1;
        }
    }
    if (cnt == maxDup)
        cnd.push_back(a[a.size()-1]);
    sort(cnd.begin(), cnd.end());
    for (int i=cnd.size()-2;i>=0;i--){
        if (cnd[i] == cnd[i+1])
            cnd.erase(cnd.begin()+i);
    }
    for (auto e : cnd){
        int i=0;
        while (i < a.size()){
            if (a[i] == e){
                cout << e << " --> x[ " << i << " : " << i+maxDup << " ]\n";
                i += maxDup;
            }else i++;
        }
    }

    return 0;
}