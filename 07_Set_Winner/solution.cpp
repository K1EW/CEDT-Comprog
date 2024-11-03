#include <iostream>
#include <set>

using namespace std;

int main(){
    set<string> s;
    set<string> loser;
    string w,l;
    while (cin >> w >> l){
        if (!loser.count(w))
            s.insert(w);
        if (s.count(l))
            s.erase(l);
        loser.insert(l);
    }
    if (s.empty()){
        cout << "None";
        return 0;
    }
    for (auto e : s)
        cout << e << " ";

    return 0;
}