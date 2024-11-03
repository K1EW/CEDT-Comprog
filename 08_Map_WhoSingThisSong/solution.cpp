#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string,vector<string>> mp;
    int n;
    cin >> n;
    cin.ignore();
    string a;
    while (n--){
        getline(cin, a);
        int idx = 0;
        for (int i=0;i<a.size();i++){
            if (a[i] == ','){
                idx = i;
                break;
            }
        }
        string b = a.substr(0, idx);
        string c = a.substr(idx+2);
        if (!mp.count(b)) mp[b] = {c};
        else mp[b].push_back(c);
    }
    getline(cin, a);
    a += ", ";
    string curr = "";
    for (int i=0;i<a.size();i++){
        if (a[i] != ',') curr += a[i];
        else{
            cout << curr << " -> ";
            if (mp.count(curr)){
                for (int j=0;j<mp[curr].size();j++){
                    cout << mp[curr][j];
                    if (j != mp[curr].size()-1)
                        cout << ", ";
                }
            }else cout << "Not found";
            cout << "\n";
            curr = "";
            i++;
        }
    }

    return 0;
}