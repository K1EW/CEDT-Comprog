#include <iostream>

using namespace std;

int main(){
    int n, mx = -1;
    cin >> n;
    int a[n];
    int ans=0;
    for (int i=0;i<n;i++){
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for (int h=mx;h>=1;h--){
        int start = -1;
        for (int i=0;i<n;i++){
            if (a[i] >= h){
                if (start != -1)
                    ans += i-start-1;
                start=  i;
            }
        }
    }

    cout << ans;

    return 0;
}