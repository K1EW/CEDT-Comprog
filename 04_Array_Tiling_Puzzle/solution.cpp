#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n*n];
    int zIdx = 0;
    for (int i=0;i<n*n;i++){
        cin >> a[i];
        if (a[i] == 0)
            zIdx = i;
    }
    
    int inv = 0;
    for (int i=0;i<n*n;i++){
        for (int j=i+1;j<n*n;j++){
            if (a[i] != 0 && a[j] != 0)
                inv += a[i] > a[j];
        }
    }

    if (n%2 != 0 && inv%2 == 0) cout << "YES";
    else if (n%2 == 0){
        if (inv%2 != 0 && zIdx%(n*2) < n) cout << "YES";
        else if (inv%2 == 0 && zIdx%(n*2) >= n) cout << "YES";
        else cout << "NO";
    }else cout << "NO";

    return 0;
}