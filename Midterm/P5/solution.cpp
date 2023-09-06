#include <iostream>

using namespace std;

int a[1500];
int main(){
    int n;
    cin >> n;
    int mxR=0;
    for (int i=0;i<n;i++){
        int l, r;
        cin >> l >> r;
        mxR = max(mxR, r);
        a[l]++;
        a[r]--;
    }
    int best =0;
    for (int i=1;i<=mxR;i++){
        a[i] += a[i-1];
        best = max(best, a[i]);
    }
    cout << best;
    return 0;
}