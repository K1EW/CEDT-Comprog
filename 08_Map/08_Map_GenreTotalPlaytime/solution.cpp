#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int toSec(string a){
    int i=0;
    while(a[i++]!=':');
    i--;
    return 60*stoi(a.substr(0, i)) + stoi(a.substr(i+1));
}

string toString(int sec){
    return to_string(sec/60) + ":" + to_string(sec%60);
}

int main(){
    string a,b,c,d;
    map<string, int> mp;
    vector<pair<int, string>> v;
    while(cin >> a >> b >> c >> d){
        if (mp.count(c)) mp[c] += toSec(d);
        else mp[c] = toSec(d);
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
        v.push_back({it->second, it->first});
    sort(v.begin(), v.end());
    for (int i=v.size()-1;i>=max(0, (int)v.size()-3);i--)
        cout << v[i].second << " --> " << toString(v[i].first) << "\n";

    return 0;
}