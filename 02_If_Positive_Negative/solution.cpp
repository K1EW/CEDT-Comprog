#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n > 0)
        cout << "positive\n";
    else if (n < 0)
        cout << "negative\n";
    else
        cout << "zero\n";
    if (n%2==0)
        cout << "even";
    else
        cout << "odd";

    return 0;
}