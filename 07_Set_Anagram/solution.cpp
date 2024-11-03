#include <iostream>
#include <set>

using namespace std;

int main(){
    string a,b;
    multiset<char> ms1,ms2;
    getline(cin,a);
    getline(cin,b);
    for (auto e : a)
        if (e != ' ')
            ms1.insert(tolower(e));
    for (auto e : b)
        if (e != ' ')
            ms2.insert(tolower(e));
    for (auto e : a){
        if (ms1.count(e) != ms2.count(e)){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}