#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int a, ans=0;
    map<string, int> mp1; //org, amt
    map<string, int> mp2; //org, sum
    while (cin >> s){
        if ('0' <= s[0] && s[0] <= '9'){
            int lim = stoi(s)-2000;
            for (auto &[k, v] : mp1){
                int year = stoi(k.substr(k.size()-4, 2));
                if (year <= lim)
                    mp2[k.substr(0,k.size()-4)] += v;
            }
            vector<pair<int, string>> vec;
            for (auto &[k, v] : mp2)
                vec.push_back({-v, k});
            sort(vec.begin(), vec.end());
            for (auto &[v, k] : vec)
                cout << k << " " << -v << "\n"; 
            break;
        }else{
            cin >> a;
            mp1[s] += a;
        }
    }

    return 0;
}