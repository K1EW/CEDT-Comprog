#include <iostream>

using namespace std;

bool isBetween(int a, int x, int b){
    return (a <= x && x <= b || a >= x && x >= b);
}

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
            if (isBetween(init[i],curr,dest) && isBetween(curr, dest, end[i]))
                cost = 0;
            else if (isBetween(init[i],dest,curr) && isBetween(dest,curr,end[i]))
                cost = abs(end[i] - dest);
            else if (isBetween(init[i],curr,end[i]))
                cost = abs(end[i] - dest);
            else
                cost = abs(end[i] - curr) + abs(curr - dest);
            if (best > cost){
                best = cost;
                chosen = i;
            }
        }
        cout << ">> " << chosen << "\n";
    }

    return 0;
}