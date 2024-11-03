#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, double> mp;
    mp["THB"] = 1;
    while (n--){
        string a;
        double b;
        cin >> a >> b;
        mp[a] = b;
    }
    cin.ignore();
    int x;
    string y;
    cin >> x >> y;
    vector<pair<int, string>> v = {{x, y}};
    while (cin >> y)
        v.push_back({(int)(v.back().first*mp[v.back().second]/mp[y]), y});
    for (int i=0;i<v.size();i++)
        cout << v[i].first << " " << v[i].second << (i != v.size()-1 ? " -> " : "");

    return 0;
}