#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    s += '$';
    vector<string> v;
    v.push_back(s);
    for (int i=s.size()-2;i>=0;i--){
        s += s[0];
        s = s.substr(1);
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    string enc = "";
    for (auto e : v)
        enc += e[e.size()-1];
    cout << enc;

    return 0;
}