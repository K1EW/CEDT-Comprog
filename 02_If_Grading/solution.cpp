#include <iostream>

using namespace std;

int main(){
    int s;
    cin >> s;
    if (s>=80)
        cout << "A";
    else if (s>=70)
        cout << "B";
    else if (s>=60)
        cout << "C";
    else if (s>=50)
        cout << "D";
    else
        cout << "F";

    return 0;
}