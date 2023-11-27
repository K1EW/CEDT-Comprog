#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    set<string> s;
    while(cin >> str){
        sort(str.begin(), str.end());
        s.insert(str);
    }
    cout << s.size();

    return 0;
}