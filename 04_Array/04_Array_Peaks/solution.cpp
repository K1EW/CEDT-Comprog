#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int ans=0;
    for (int i=0;i<n;i++)
        cin >> a[i];
    for (int i=1;i<n-1;i++)
        ans += (a[i-1] < a[i] && a[i] > a[i+1]);
    cout << ans;

    return 0;
}