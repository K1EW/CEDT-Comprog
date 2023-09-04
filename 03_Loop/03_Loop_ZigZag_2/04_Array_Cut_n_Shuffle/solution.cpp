#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string a[n];
    for (int i=0;i<n;i++)
        cin >> a[i];
    string cmd;
    cin.ignore();
    getline(cin, cmd);
    for (int k=0;k<cmd.size();k++){
        string b[n];
        for (int i=0;i<n;i++)
            b[i] = a[i];
        if (cmd[k] == 'C'){
            for (int i=0,j=n/2; i<n/2; i++,j++)
                a[i] = b[j];
            for (int i=n/2,j=0; i<n; i++,j++)
                a[i] = b[j];
        }else if (cmd[k] == 'S'){
            for (int i=0, j=0; i<n; i+=2,j++)
                a[i] = b[j];
            for (int i=1, j=n/2; i<n; i+=2,j++)
                a[i] = b[j];
        }
    }

    for (int i=0;i<n;i++)
        cout << a[i] << " ";

    return 0;
}