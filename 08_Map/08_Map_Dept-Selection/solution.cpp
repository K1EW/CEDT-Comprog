#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string,int> mp1;
    map<string, int> mp2;
    int n;
    cin >> n;
    while (n--){
        string a;
        int b;
        cin >> a >> b;
        mp1[a] = b;
        mp2[a] = 0;
    }
    cin >> n;
    vector<tuple<double, vector<string>, string>> v;
    string id, w, x, y, z;
    double sc;
    while (n--){
        cin >> id >> sc >> w >> x >> y >> z;
        v.push_back(make_tuple(sc, vector<string>({w,x,y,z}), id));
    }
    sort(v.begin(), v.end());
    vector<pair<string, string>> ans;
    for (int i=v.size()-1;i>=0;i--){
        auto [a, b, c] = v[i];
        for (auto e : b){
            if (mp2[e] != mp1[e]){
                mp2[e]++;
                ans.push_back({c,e});
                break;
            }
        }
    }
    sort(ans.begin(), ans.end());
    for (auto p : ans)
        cout << p.first << " " << p.second << "\n";

    return 0;
}