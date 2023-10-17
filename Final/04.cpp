#include <bits/stdc++.h>

using namespace std;

tuple<int,int> split(string str){
    int idx=0;
    for (int i=0;i<str.size();i++){
        if (str[i] == '-'){
            idx = i;
            break;
        }
    }
    return {stoi(str.substr(0,idx)), stoi(str.substr(idx+1))};
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string xname, yname, score;
        int xwin=0,ywin=0;
        cin >> xname >> yname;
        vector<int> xs;
        vector<int> ys;
        while (1){
            cin >> score;
            if (score == "*") break;
            auto [x,y] = split(score);
            xs.push_back(x);
            ys.push_back(y);
            if (x > y) xwin++;
            else ywin++;
        }
        if (xwin>ywin) cout << "*";
        cout << xname << " " << xwin << " [ ";
        for (auto e : xs)
            cout << e << " ";
        cout << "]\n";
        if (ywin>xwin) cout << "*";
        cout << yname << " " << ywin << " [ ";
        for (auto e : ys)
            cout << e << " ";
        cout << "]\n";
    }
    return 0;
}