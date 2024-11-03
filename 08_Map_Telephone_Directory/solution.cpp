#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string,string> mp;
    int n;
    cin >> n;
    while (n--){
        string a,b,c;
        cin >> a >> b >> c;
        mp[a + " " + b] = c;
        mp[c] = a + " " + b;
    }
    cin >> n;
    cin.ignore();
    while(n--){
        string a;
        getline(cin,a);
        if (mp.count(a)) cout << a << " --> " << mp[a] << "\n";
        else cout << a << " --> Not found\n";
    }

    return 0;
}