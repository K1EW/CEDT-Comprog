#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;
    int y = (x-543)%100;
    cout << y + y/4 + 11;

    return 0;
}