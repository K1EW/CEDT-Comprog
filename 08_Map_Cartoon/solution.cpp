#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main(){
    map<string, vector<string>> mp;
    set<string> keys_set;
    vector<string> keys;
    string a,b;
    while (cin >> a >> b){
        if (!keys_set.count(b)) keys.push_back(b);
        keys_set.insert(b);
        if (mp.count(b)) mp[b].push_back(a);
        else mp[b] = vector<string>(1, a);
    }
    for (auto key : keys){
        cout << key << ": ";
        for (auto e : mp[key])
            cout << e << " ";
        cout << "\n";
    }

    return 0;
}