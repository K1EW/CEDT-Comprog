#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,string> mp;
    int n;
    cin >> n;
    while (n--){
        string a, b;
        cin >> a >> b;
        mp[a] = b;
        mp[b] = a;
    }
    cin >> n;
    while (n--){
        string a;
        cin >> a;
        if (mp.count(a)) cout << mp[a] <<'\n';
        else cout << "Not found\n";
    }

    return 0;
}