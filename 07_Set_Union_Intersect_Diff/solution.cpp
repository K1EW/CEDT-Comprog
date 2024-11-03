#include <iostream>
#include <set>
#include <vector>

using namespace std;

set<int> split(string s){
    while (s.back() == ' ') s.pop_back();
    string num = "";
    set<int> ret;
    for (auto e : s){
        if (e != ' ') num.push_back(e);
        else{
            ret.insert(stoi(num));
            num = "";
        }
    }
    ret.insert(stoi(num));
    return ret;
}

int main(){
    string str;
    vector<set<int>> sets;
    while(getline(cin,str))
        sets.push_back(split(str));
    set<int> u;
    set<int> i = sets[0];
    set<int> d = sets[0];
    for (auto s : sets)
        for (auto e : s)
            u.insert(e);
    for (auto s : sets){
        set<int> temp;
        for (auto e : s)
            if (s.count(e) && i.count(e))
                temp.insert(e);
        i = temp;
    }
    for (int i=1;i<sets.size();i++){
        for (auto e : sets[i])
            if (d.count(e))
                d.erase(e);
    }
    cout << "U: ";
    if (u.empty()) cout << "empty set\n";
    else{
        for (auto e : u)
            cout << e << " ";
        cout << "\n";
    }
    cout << "I: ";
    if (i.empty()) cout << "empty set\n";
    else{
        for (auto e : i)
            cout << e << " ";
        cout << "\n";
    }
    cout << "D: ";
    if (d.empty()) cout << "empty set\n";
    else{
        for (auto e : d)
            cout << e << " ";
        cout << "\n";
    }

    return 0;
}