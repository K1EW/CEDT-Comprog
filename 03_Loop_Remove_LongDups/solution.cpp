#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;
    int cnt = 1;
    for (int i=1;i<s.size();i++){
        if (s[i] == s[i-1]){
            cnt++;
        }else{
            if (cnt < k){
                for (int j=0;j<cnt;j++){
                    cout << s[i-1];
                }
            }
            cnt = 1;
        }
    }
    if (cnt < k){
        for (int j=0;j<cnt;j++){
            cout << s[s.length()-1];
        }
    }

    return 0;
}