#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n;
    int init[n+1];
    int end[n+1];
    for (int i=0;i<n;i++){
        int no;
        cin >> no;
        cin >> init[no] >> end[no];
    }
    cin >> m;
    while (m--){
        int curr, dest;
        cin >> curr >> dest;
        int chosen=0, best=1e9;
        for (int i=1;i<=n;i++){
            int cost;
            if (init[i] <= curr && curr <= dest && dest <= end[i] || init[i] >= curr && curr >= dest && dest >= end[i])
                cost = 0;
            else if (init[i] <= curr && curr <= end[i] || init[i] >= curr && curr >= end[i])
                cost = abs(end[i] - dest);
            else
                cost = abs(end[i] - curr) + abs(curr - dest);
            
            if (cost < best){
                chosen = i;
                best = cost;
            }
        }
        cout << ">> " << chosen << "\n";
    }

    return 0;
}