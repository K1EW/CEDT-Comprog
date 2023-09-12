#include <bits/stdc++.h>

using namespace std;

int F(int n) {
    if (n==0||n==1) return n;
    if (n%2==0)
        return (2*F(n/2-1) + F(n/2))*F(n/2);
    return pow(F((n+1)/2),2) + pow(F((n+1)/2-1),2);
}
int M(int n) {
    if (n==0||n==1) return 1;
    int sum = 0;
    for (int k=0;k<=n-2;k++)
        sum += M(k)*M(n-2-k);
    return M(n-1) + sum;
}
int S(int n) {
    if (n==1||n==2) return 1;
    return 1.0/n*((6*n-9)*S(n-1)-(n-3)*S(n-2));
}
int D(int n) {
    if (n==0) return 1;
    return n*D(n-1)+pow(-1,n);
}
int main() {
    map<string, int(*)(int)> func = {{"F",F}, {"M",M}, {"S",S}, {"D",D}};
    string fn;
    int p;
    while (cin >> fn >> p) {
        if (func.find(fn) != func.end())
            cout << fn << '(' << p << ") = " << func[fn](p) << endl;
    }
    return 0;
}