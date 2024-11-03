#include <iostream>

using namespace std;

int cycle = 1;
string a, n;

int modulation(){
    int i=1;
    int curr = n[0]-'0';
    curr = curr%cycle;
    while (i<n.size()){
        if (curr < cycle){
           curr *= 10;
           curr += n[i]-'0';
        }
        curr = curr%cycle;
        i++;
    }

    return curr;
}

int main()
{

    while (cin >> a >> n){
        cycle = 1;
        int arr[1000];

        if (a == "0"){
            cout << ">> " << 0 << "\n";
            continue;
        }
        if (n == "0"){
            cout << ">> " << 1 << "\n";
            continue;
        }
        int lastDig = a[a.length()-1]-'0';
        arr[0] = lastDig;
        int temp = lastDig*lastDig;
        while (temp%10 != lastDig){
            arr[cycle] = temp%10;
            cycle++;
            temp *= lastDig;
            temp %= 10;
        }
        int mod = modulation();
        if (mod == 0) mod = cycle;
        cout << ">> " << arr[mod-1] << endl;
    }

    return 0;
}