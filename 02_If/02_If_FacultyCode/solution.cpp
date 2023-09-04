#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    if (s.size() == 2){
        if (s[0]=='0' && (s[1] == '1' || s[1] == '2'))
            cout << "OK";
        else if (s[0]>='2' && s[0] <= '3' && s[1] >= '0' && s[1] <= '9')
            cout << "OK";
        else if (s=="40" || s=="51" || s=="53" || s=="55" || s=="58")
            cout << "OK";
        else
            cout << "Error";
    }else{
        cout << "Error";
    }

    return 0;
}