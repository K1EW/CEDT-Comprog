#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    set<string> s;
    map<string, string> adj;
    while (n--){
        string u, v;
        cin >> u >> v;
        s.insert(u);
        s.erase(v);
        adj[u] = v;
    }
    string start = *(s.begin());
    while (1){
        cout << start << " ";
        if (!adj.count(start)) break;
        start = adj[start];
    }

    return 0;
}