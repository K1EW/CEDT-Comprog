#include <iostream>

using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        char c = s[s.length()-1];
        int cnt=0;
        for (char e : s){
            cnt += e == c;
            if (cnt%2!=0 && e != c)
                cout << e;
        }
        cout << '\n';
    }

    return 0;
}