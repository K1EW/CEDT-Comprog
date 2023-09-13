#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string,double> mp1;
    map<string, double> mp2;
    int n;
    cin >> n;
    while (n--){
        string a;
        double b;
        cin >> a >> b;
        mp1[a] = b;
        mp2[a] = 0;
    }
    double total = 0;
    cin >> n;
    while (n--){
        string a;
        int b;
        cin >> a >> b;
        if (mp1.count(a)){
            total += mp1[a]*b;
            mp2[a] += mp1[a]*b;
        }
    }
    if (total == 0) cout << "No ice cream sales";
    else{
        cout << "Total ice cream sales: " << total << "\n";
        vector<pair<double,string>> ans;
        for (auto it = mp2.begin(); it != mp2.end(); it++)
            ans.push_back({it->second, it->first});
        sort(ans.begin(), ans.end());
        cout << "Top sales: ";
        for (int i=0;i<ans.size();i++)
            if (ans[i].first == ans[ans.size()-1].first)
                cout << ans[i].second << " ";
    }

    return 0;
}