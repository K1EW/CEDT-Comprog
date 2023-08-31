#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <tuple>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<tuple<double, int, double, double>> a;
    for (int i=1;i<=n;i++){
        double x, y;
        cin >> x >> y;
        a.push_back(make_tuple(sqrt(x*x+y*y), i, x, y));
    }
    sort(a.begin(), a.end());
    auto [dis,num,x,y] = a[2];
    cout << "#" << num << ": (" << x << ", " << y << ")";

    return 0;
}