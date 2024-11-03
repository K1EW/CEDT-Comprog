#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    double a[n];
    for (int i=0;i<n;i++)
        cin >> a[i];    
    for (int i=n-1;i>=0;i--){
        double res = 0;
        int j = i;
        while (j >= 0){
            res += a[j];
            if (j != 0)
                res = 1/res;
            j--;
        }
        a[i] = res;
    }
    for (int i=0;i<n;i++)
        cout << setprecision(10) << a[i] << "\n";

    return 0;
}