#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v;
    vector<int> unq;
    int a;
    while (cin >> a)
        v.push_back(a);
    sort(v.begin(),v.end());
    int cnt=1;
    unq.push_back(v[0]);
    for (int i=1;i<v.size();i++){
        if (v[i] != v[i-1]){
            cnt++;
            unq.push_back(v[i]);
        }
    }
    cout << cnt << '\n';
    for (int i=0;i<(unq.size()>10?10:unq.size());i++)
        cout << unq[i] << " ";

    return 0;
}