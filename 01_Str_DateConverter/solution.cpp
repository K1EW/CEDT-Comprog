#include <iostream>

using namespace std;

int main(){
    string tem = "JANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC";
    string s;
    cin >> s;
    cout << tem.substr((stoi(s.substr(3,2))-1)*3,3) << " " << stoi(s.substr(0,2)) << ", " << stoi(s.substr(6,4))-543;

    return 0;
}