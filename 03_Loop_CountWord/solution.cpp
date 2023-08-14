#include <iostream>

using namespace std;

int main(){
    string w, s;
    int cnt=0;
    getline(cin, w);
    getline(cin, s);
    string curr = "";
    for (int i=0;i<s.size();i++){
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) curr += s[i];
        else{
            cnt += curr == w;
            curr = "";
        }
    }
    cnt += curr == w;
    
    cout << cnt;

    return 0;
}