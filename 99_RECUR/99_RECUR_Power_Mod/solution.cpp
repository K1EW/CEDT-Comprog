#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll f(ll a, ll k, ll m){
    if (k==0)
        return 1;
    if (k%2!=0)
        return a*f(a, k/2, m)*f(a, k/2, m)%m;
    return f(a, k/2, m)*f(a, k/2, m)%m;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, k, m;
    cin >> a >> k >> m;
    cout << f(a, k, m);

    return 0;
}