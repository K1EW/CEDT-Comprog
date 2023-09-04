#include <iostream>

using namespace std;

int n;

int findMin(int arr[]){
    int ret = 1e9;
    for (int i=0;i<n;i++)
        ret = min(ret, arr[i]);
    return ret;
}

int findMax(int arr[]){
    int ret = -1e9;
    for (int i=0;i<n;i++)
        ret = max(ret, arr[i]);
    return ret;
}

int main(){
    cin >> n;
    int a[n],b[n];
    for (int i=0;i<n;i++){
        if (i%2==0)
            cin >> a[i] >> b[i];
        else
            cin >> b[i] >> a[i];
    }
    string cmd;
    cin >> cmd;
    if (cmd == "Zig-Zag")
        cout << findMin(a) << " " << findMax(b);
    else
        cout << findMin(b) << " " << findMax(a);

    return 0;
}