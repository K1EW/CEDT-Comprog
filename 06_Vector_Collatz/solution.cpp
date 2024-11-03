#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n;
    v.push_back(n);
    while (n!=1){
        if (n%2==0) n /= 2;
        else n = n*3 + 1;
        v.push_back(n);
    }
    int start = 0;
    if (v.size() > 15)
        start = v.size() - 15;
    for (int i=start;i<v.size();i++){
        cout << v[i];
        if (i != v.size()-1)
            cout << "->";
    }

    return 0;
}