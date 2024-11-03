#include <bits/stdc++.h>

using namespace std;

int n, a, b;
vector<int> adjList[100005];

bool DFS(int u){
    if (u == b)
        return true;
    bool ret = false;
    for (auto v : adjList[u])
        ret = ret || DFS(v);
    return ret;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> a >> b;
    for (int i=0;i<n;i++){
        int u,v;
        cin >> u >> v;
        adjList[u].push_back(v);
    }
    cout << (DFS(a) ? "yes" : "no");

    return 0;
}