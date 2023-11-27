#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, a1, b1, a2, b2, a3, b3, a4, b4;
    cin >> t;

    while (t--){
        int cnt=0;
        cin >> n >> a1 >> b1 >> a2 >> b2 >> a3 >> b3 >> a4 >> b4;
        for (int x1=a1;x1<=b1;x1++)
            for (int x2=a2;x2<=b2;x2++)
                for (int x3=a3;x3<=b3;x3++)
                    for (int x4=a4;x4<=b4;x4++)
                        cnt += (x1 + x2 + x3 + x4 == n);
        cout << cnt << "\n";
    }

    return 0;
}