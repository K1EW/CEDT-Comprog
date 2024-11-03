#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, x, cnt=0;
    cin >> n;
    set<int> s;
    while (cin >> x){
        cnt += s.count(n-x);
        s.insert(x);
    }
    cout << cnt;

    return 0;
}