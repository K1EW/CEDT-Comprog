#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<pair<int,int>> ctm;
    int n;
    int start;
    cin >> n;
    while (n--){
        string cmd;
        int x;
        cin >> cmd;
        if (cmd == "next"){
            cout << ">> call " << ctm[0].first << "\n"; 
        }else if (cmd == "avg_qtime"){
            
        }else{
            cin >> x;
            if (cmd == "reset")
                start = x;
            else if (cmd == "new"){
                cout << ">> ticket " << start << "\n";
                ctm.push_back({start++, x});
            }
            else{
                cout << ">> qtime " << ctm[0].first << " " << x-ctm[0].second << "\n";
                ctm.erase(ctm.begin());
            }
        }
    }

    return 0;
}