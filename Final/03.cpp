#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string, string> a; //name, dept
    map<string, set<string>> b;// dept, names
    int n, m;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        string name, dept;
        cin >> name >> dept;
        a[name] = dept;
        b[dept].insert(name);
    }
    while (m--){
        int cmd;
        string x, y;
        cin >> cmd >> x >> y;
        if (cmd == 1){
            b[a[x]].erase(x);
            b[y].insert(x);
            a[x] = y;
        }else{
            for (auto e : b[x]){
                b[y].insert(e);
                a[e] = y;
            }
            b.erase(x);
        }
    }
    for (auto it = b.begin(); it != b.end(); it++){
        cout << (*it).first << ": ";
        for (auto e : (*it).second)
            cout << e << " ";
        cout << "\n";
    }
    return 0;
}