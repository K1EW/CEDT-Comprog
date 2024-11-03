#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<float,string> x, pair<float,string> y){
    if (x.first != y.first)
        return x.first > y.first;
    return x.second < y.second;
}

int main(){
    vector<pair<string,float>> a;
    vector<pair<float,string>> b;
    string n;
    float p;
    while (true){
        cin >> n;
        if (n == "END")
            break;
        cin >> p;
        a.push_back({n,p});
        b.push_back({0, n});
    }
    while (cin >> n){
        for (int i=0;i<a.size();i++){
            if (a[i].first == n){
                b[i].first += a[i].second;
                break;
            }
        }
    }
    sort(b.begin(),b.end(), cmp);
    if (b[0].first != 0){
        for (int i=0;i<min(3,(int)b.size());i++)
            cout << b[i].second << " " << b[i].first << "\n";
    }else cout << "No Sales";

    return 0;
}