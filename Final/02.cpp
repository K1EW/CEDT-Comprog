#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin >> n;
    map<string,int> a;//name, score
    map<int, vector<string>> b;//score, names
    for (int i=0;i<n;i++){
        string name;
        int score;
        cin >> name >> score;
        a[name] = min(a[name],-score);
    }
    cin >> m;
    for (auto it = a.begin(); it != a.end(); it++){
        b[(*it).second].push_back((*it).first);
    }
    int cnt = 0;
    for (auto it = b.begin(); it != b.end(); it++){
        cnt++;
        cout << -(*it).first << " ";
        for (auto e : (*it).second)
            cout << e << " ";
        cout << "\n";
        if (cnt == m)
            break;
    }

    return 0;
}
