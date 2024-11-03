#include <bits/stdc++.h>

using namespace std;

int n, a, b;
vector<int> adjList[100005];
vector<vector<int>> ans;

void DFS(int u, vector<int> path){
    path.push_back(u);
    if (u == b){
        ans.push_back(path);
        return;
    }
    for (auto v : adjList[u])
        DFS(v, path);
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
    DFS(a, {});
    if (ans.empty()) cout << "no";
    else{
        sort(ans.begin(), ans.end());
        for (int i=0;i<ans.size();i++){
            if (i!=0&&ans[i]==ans[i-1]) continue;
            for (int j=0;j<ans[i].size();j++){
                cout << ans[i][j] << (j != ans[i].size()-1 ? " -> " : "\n");
            }
        }
    }

    return 0;
}