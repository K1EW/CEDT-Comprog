#include <iostream>

using namespace std;

int n;

int main(){
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
        cin >> a[i];
    int cnt=0;
    for (int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << '\n';
    while (cnt != n-1){
        int b[n];
        int mx = a[0], mxIdx=0;
        for (int i=0;i<n;i++)
            b[i] = a[i];
        for (int i=0;i<n-cnt;i++){
            if (mx < a[i]){
                mx = a[i];
                mxIdx = i;
            }
        }
        if (mxIdx == 0){
            for (int i=0;i<n-cnt;i++)
                a[i] = b[n-cnt-1-i];
            for (int i=0;i<n;i++)
                cout << a[i] << " ";
            cout << "\n";
            cnt++;
        }else if (mxIdx != n-1-cnt){
            for (int i=0;i<=mxIdx;i++)
                a[i] = b[mxIdx - i];
            for (int i=mxIdx+1;i<n-cnt;i++)
                a[i] = b[i];
            for (int i=0;i<n;i++)
                cout << a[i] << " ";
            cout << "\n";
        }else cnt++;
    }

    return 0;
}