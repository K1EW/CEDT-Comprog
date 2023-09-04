#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    int n,x,cnt=0;
    cin >> n;
    while (true){
        cin >> x;
        if (x==-1)
            break;
        if (cnt%2==0) v.push_back(x);
        else v.insert(v.begin(),x);
        cnt++;
    }
    cout << "[";
    for (int i=0;i<v.size();i++){
        cout << v[i];
        if (i!=v.size()-1)
            cout << ", ";
    }
    cout << "]";

    return 0;
}