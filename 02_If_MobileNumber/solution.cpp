#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    if (s.size()==10){
        string a = s.substr(0,2);
        if (a=="06" || a=="08" || a=="09")
            cout << "Mobile number";
        else
            cout << "Not a mobile number";
    }else{
        cout << "Not a mobile number";
    }

    return 0;
}