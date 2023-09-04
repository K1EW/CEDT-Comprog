#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    vector<pair<int,int>> line;
    vector<pair<int,int>> table;
    int n;
    int start;
    cin >> n;
    int callCnt=0;
    int total=0;
    while (n--){
        string cmd;
        int x;
        cin >> cmd;
        if (cmd == "next"){
            cout << ">> call " << line[0].first << "\n";
            table.push_back(line[0]);
            line.erase(line.begin()); 
        }else if (cmd == "avg_qtime"){
            cout << ">> avg_qtime " << round((float)total/callCnt*100)/100 << "\n";
        }else{
            cin >> x;
            if (cmd == "reset")
                start = x;
            else if (cmd == "new"){
                cout << ">> ticket " << start << "\n";
                line.push_back({start++, x});
            }
            else{
                cout << ">> qtime " << table.back().first << " " << x-table.back().second << "\n";
                total += x-table.back().second;
                callCnt++;
                table.pop_back();
            }
        }
    }

    return 0;
}