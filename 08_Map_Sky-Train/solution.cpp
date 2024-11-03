#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, vector<string>> mp;
    string u,v;
    while (cin >> u >> v){
        if (mp.count(u)) mp[u].push_back(v);
        else mp[u] = {v};
        if (mp.count(v)) mp[v].push_back(u);
        else mp[v] = {u};
    }
    cin >> u;
    vector<string> ans = {u};
    for (auto e : mp[u]){
        ans.push_back(e);
        for (auto f : mp[e])
            ans.push_back(f);
    }
    sort(ans.begin(), ans.end());
    for (int i=0;i<ans.size();i++)
        if (i==0||ans[i]!=ans[i-1])
            cout << ans[i] << "\n";

    return 0;
}