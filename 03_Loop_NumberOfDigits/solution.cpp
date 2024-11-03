#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll sol(ll e){
    if (e==-1) return 0;
    ll t = to_string(e).length();
    ll ret = 1, p = 1;
    for (int i=1;i<t;i++){
        ret += 9*p*i;
        p *= 10;
    }
    ret += (e-p+1)*t;
    return ret;
}

int main(){
    ll m, n;
    cin >> m >> n;
    cout << sol(n) - sol(m-1);
}