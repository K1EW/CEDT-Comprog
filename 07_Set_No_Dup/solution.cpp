#include <iostream>
#include <set>

using namespace std;

int main(){
    int x,cnt=0;
    set<int> s;
    while (cin >> x){
        cnt++;
        if (s.count(x)){
            cout << cnt;
            return 0;
        }
        s.insert(x);
    }
    cout << -1;

    return 0;
}