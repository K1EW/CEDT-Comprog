#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int k=2;
    string s = "";
    while (n!=1){
        while(n%k!=0)
            k++;
        n /= k;
        s += to_string(k)+"*";
    }
    cout << s.substr(0, s.size()-1);

    return 0;
}