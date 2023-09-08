#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<pair<string,string>> a;
    string id, g;
    while (cin >> id){
        if (id == "q") break;
        cin >> g;
        a.push_back({id,g});
    }
    while (cin >> id){
        for (int i=0;i<a.size();i++){
            if (id == a[i].first){
                if (a[i].second == "B+") a[i].second = "A";
                else if (a[i].second == "B") a[i].second = "B+";
                else if (a[i].second == "C+") a[i].second = "B";
                else if (a[i].second == "C") a[i].second = "C+";
                else if (a[i].second == "D+") a[i].second = "C";
                else if (a[i].second == "D") a[i].second = "D+";
                else if (a[i].second == "F") a[i].second = "D";
            }
        }
    }
    for (auto e : a)
        cout << e.first << " " << e.second << "\n";

    return 0;
}