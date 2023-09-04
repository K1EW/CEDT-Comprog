#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int h[n];
    int ans=0;
    for (int i=0;i<n;i++)
        cin >> h[i];
    int pref[n] = {0};
    int suff[n] = {0};
    pref[0] = h[0];
    suff[n-1] = h[n-1];
    for (int i=1;i<n;i++)
        pref[i] = max(pref[i-1], h[i]);
    for (int i=n-2;i>=0;i--)
        suff[i] = max(suff[i+1], h[i]);
    for (int i=0;i<n;i++){
        if (min(pref[i-1],suff[i+1]) > h[i])
            ans += min(pref[i-1],suff[i+1]) - h[i];
    }

    cout << ans;

    return 0;
}