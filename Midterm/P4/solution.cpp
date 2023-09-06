#include<iostream>
#include<cmath>

using namespace std;

typedef unsigned long long ull;

int main(){
    int n;
    cin >> n;
    while (n--){
        int A,N,B,M;
        cin >> A >> N >> B >> M;
        ull num = 0;
        for (int i=1;i<=N+M;i++){
            if (i<=N)
                num += A;
            else
                num += B;
            if (i != N+M)
                num *= 10;
        }
        if (num==1){
            cout << "NO\n";
            continue;
        }
        int cnt=0;
        for (ull i=1;i<=(ull)sqrt(num);i++)
            cnt += num%i==0;
        if (cnt==1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}