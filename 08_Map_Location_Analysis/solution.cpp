#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, set<string>> mp;
    vector<string> order;
    int n;
    cin >> n;
    while (n--){
        string id,c;
        cin >> id;
        mp[id] = {};
        order.push_back(id);
        cin >> c;
        while(c!="*"){
            mp[id].insert(c);
            cin >> c;
        }
    }
    string key;
    cin >> key;
    vector<string> ans;
    for (auto k : order){
        if (k == key) continue;
        for (auto e : mp[k]){
            if (mp[key].count(e)){
                ans.push_back(k);
                break;
            }
        }
    }
    if (ans.empty()) cout << ">> Not Found";
    else{
        for (auto e : ans)
            cout << ">> " << e << "\n";
    }

    return 0;
}