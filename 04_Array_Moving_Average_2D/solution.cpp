#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    double a[n+5][m+5];
    for (int i=0;i<=n;i++)
        for (int j=0;j<=m;j++)
            a[i][j]=0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >> a[i][j];
            a[i][j] += a[i][j-1] + a[i-1][j] - a[i-1][j-1];
        }
    }
    double ans[n+5][m+5];
    for (int i=3;i<=n;i++){
        for (int j=3;j<=m;j++){
            ans[i-2][j-2] = a[i][j] - a[i][j-3] - a[i-3][j] + a[i-3][j-3];
            ans[i-2][j-2] /= 9;
        }
    }
    for (int i=1;i<=n-2;i++){
        for (int j=1;j<=m-2;j++)
            cout << round(ans[i][j]*100)/100.0 << " ";
        cout << "\n";
    }
    return 0;
}