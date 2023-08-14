#include <iostream>

using namespace std;

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);
    
    if (a.size() != b.size()) cout << "Incomplete answer";
    else{
        int cnt=0;
        for (int i=0;i<a.size();i++)
            cnt += a[i] == b[i];
        cout << cnt;
    }

    return 0;
}