#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n, x, mn=INT_MAX,sum=0;
        cin >> n;
        while (n--){
            cin >> x;
            sum += x;
            mn = min(mn, x);
        }
        cout << sum-mn << "\n";
    }

    return 0;
}