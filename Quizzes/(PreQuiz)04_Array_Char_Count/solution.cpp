#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    int cnt[300];
    for (int i='a';i<='z';i++)
        cnt[i] = 0;
    for (int i=0;i<s.size();i++){
        if (isalpha(s[i]))
            cnt[tolower(s[i])]++;
    }
    for (char i='a';i<='z';i++)
        if (cnt[i])
            cout << i << " -> " << cnt[i] << "\n";

    return 0;
}