#include <iostream>

using namespace std;

string sol(string a, string b) {
    string ret = "";
    if (a.size() < b.size()) {
        string temp = a;
        a = b;
        b = temp;
    }
    int ext = 0;
    int i, j;
    for (i = a.size() - 1, j = b.size() - 1; j >= 0; i--, j--) {
        int s = (a[i] - '0') + (b[j] - '0') + ext;
        if (s < 10) {
            ret += (char)(s + '0');
            ext = 0;
        } else {
            ret += (char)(s - 10 + '0');
            ext = 1;
        }
    }
    while (ext != 0 && i != -1) {
        int s = (a[i] - '0') + ext;
        if (s < 10) {
            ret += (char)(s + '0');
            ext = 0;
        } else {
            ret += (char)(s - 10 + '0');
            ext = 1;
        }
        i--;
    }
    if (ext != 0)
        ret += (char)(ext + '0');
    while (i != -1)
        ret += a[i--];
    string rvRet = "";
    for (int i = ret.size() - 1; i >= 0; i--)
        rvRet += ret[i];
    return rvRet;
}

int main() {
    string num;
    string ans = "";
    while (true) {
        cin >> num;
        if (num == "END")
            break;
        ans = sol(ans, num);
    }
    cout << ans;
    return 0;
}