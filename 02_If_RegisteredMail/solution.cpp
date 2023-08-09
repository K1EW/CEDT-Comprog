#include <iostream>

using namespace std;

int main(){
    int w;
    cin >> w;

    if (w > 2000)
        cout << "Reject";
    else if (w > 1000)
        cout << "58";
    else if (w > 500)
        cout << "38";
    else if (w > 250)
        cout << "28";
    else if (w > 100)
        cout << "22";
    else
        cout << "18";

    return 0;
}