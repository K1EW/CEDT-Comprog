#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int a[10];
    for (int i=0;i<10;i++)
        a[i] = 0;
    for (int i=0;i<s.size();i++){
        if ('0' <= s[i] && s[i] <= '9')
            a[s[i]-'0'] = 1;
    }
    string ans = "";
    for (int i=0;i<10;i++)
        if (a[i] == 0)  
            ans += to_string(i)+",";
    if (ans.size()) cout << ans.substr(0, ans.length()-1);
    else cout << "None";

    return 0;
}