#include <iostream>

using namespace std;

int n;

int findCostEntry(string ct, string ctList[], int costList[]){
    int idx=0;
    for (int i=0;i<n;i++){
        if (ct == ctList[i]){
            idx = i;
            break;
        }
    }
    return costList[idx];
}

int main(){
    cin >> n;
    string ctList[n];
    int costList[n];
    int cost = 0;
    for (int i=0;i<n;i++)
        cin >> ctList[i] >> costList[i];
    string fl;
    cin.ignore();
    getline(cin, fl);
    string prevCt = fl.substr(4,2);
    fl += " ";
    for (int i=0;i<fl.size();i++){
        if (fl[i] == ' '){
            string currCt = fl.substr(i-2,2);
            if (currCt != prevCt){
                cost += findCostEntry(currCt, ctList, costList);
                prevCt = currCt;
            }
        }
    }

    cout << cost;

    return 0;
}