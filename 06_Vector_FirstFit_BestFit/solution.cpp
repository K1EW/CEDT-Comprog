#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, vector<int>> x, pair<int, vector<int>> y){
    if (x.first == y.first){
        if (x.second.size() != y.second.size())
            return x.second.size() < y.second.size();
        else
            return x.second < y.second;
    }
    return x.first > y.first;
}

int main(){
    vector<pair<int, vector<int>>> v;
    string cmd;
    cin >> cmd;
    int x;
    while (cin >> x){
        bool inserted = false;
        if (cmd == "first"){
            for (auto &e : v){
                if (e.first + x <= 100){
                    e.second.push_back(x);
                    e.first += x;
                    inserted = true;
                    break;
                }
            }
        }else{
            auto bestIt = v.end();
            int mx = 0;
            for (auto it = v.begin(); it < v.end(); it++){
                auto [sum, vec] = *it;
                if (sum + x <= 100 && sum + x > mx){
                    mx = sum + x;
                    bestIt = it;
                }
            }
            if (bestIt != v.end()){
                (*bestIt).second.push_back(x); 
                (*bestIt).first += x;
                inserted = true; 
            }
        }
        if (!inserted)
            v.push_back({x, {x}});
    }
    for (auto &e : v)
        sort(e.second.begin(), e.second.end());
    sort(v.begin(), v.end(), cmp);
    for (auto e : v){
        for (auto x : e.second)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}