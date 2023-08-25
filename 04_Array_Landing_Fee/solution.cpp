#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string ctList[n+5];
    int fees[n+5];
    for (int i=0;i<n;i++)
        cin >> ctList[i] >> fees[i];
    cin.ignore();
    string fl;
    getline(cin, fl);
    int cost = 0 ;
    for (int i=12;i<fl.size();i+=7){
        string u = fl.substr(i-8,2);
        string v = fl.substr(i-1,2);
        if (u != v){
            int idx = 0;
            for (int i=0;i<n;i++){
                if (ctList[i] == v){
                    idx = i;
                    break;
                }
            }
            cost += fees[idx];
        }
    }

    cout << cost;

    return 0;
}