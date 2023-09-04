#include <iostream>
#include <cmath>

using namespace std;

long gcd(long a, long b){
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

int main(){
    string a, b, c;
    cin >> a >> b >> c;

    int q = stoi(b+c)-stoi(b);
    int d = (pow(10, c.size())-1)*pow(10, b.size());
    q += stoi(a)*d;
    int GCD = gcd(q,d);
    q /= GCD;
    d /= GCD;
    cout << q << " / " << d;

    return 0;
}