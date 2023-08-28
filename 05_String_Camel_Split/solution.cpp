#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    string ans = "";
    ans += s[0];
    for (int i=1;i<s.size();i++){
        if ('A' <= s[i] && s[i] <= 'Z' || isdigit(s[i]) && !isdigit(s[i-1]) || !isdigit(s[i]) && isdigit(s[i-1])){
            ans += " ";
        }
        ans += s[i];
    }
    for (char e : ans){
        if (e == ' ')
            cout << ", ";
        else
            cout << e;
    }

    return 0;
}