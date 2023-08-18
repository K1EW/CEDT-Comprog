#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n; cin.ignore();
    string end = "Y G N B P K";
    while(n--){
        string s;
        getline(cin, s);
        s += "   ";
        int l = s.size(), lastRIdx = -1;
        int score = 0;
        bool ok = true;
        for (int i=l-1;i>=0;i--){
            if (s[i]=='R'){
                lastRIdx = i;
                break;
            }
        }
        if (lastRIdx == -1){
            cout << "WRONG_INPUT\n";
            continue;
        }
        for (int i=0;i<=lastRIdx;i+=4){
            ok = ok && (s[i]=='R' && s[i+2] != 'R');
            if (s[i]=='R' || s[i+2]=='R') score += 1;
            if (s[i]=='Y' || s[i+2]=='Y') score += 2;
            if (s[i]=='G' || s[i+2]=='G') score += 3;
            if (s[i]=='N' || s[i+2]=='N') score += 4;
            if (s[i]=='B' || s[i+2]=='B') score += 5;
            if (s[i]=='P' || s[i+2]=='P') score += 6;
            if (s[i]=='K' || s[i+2]=='K') score += 7;
        }
        if (!ok){
            cout << "WRONG_INPUT\n";
            continue;
        }
        int j=0;
        for (int i=lastRIdx+4;i<l-3;i+=2, j+=2){
            if (j == (int)end.size()){
                ok = false;
                break;
            }
            ok = ok && (s[i]==end[j]);
            if (s[i]=='R') score += 1;
            if (s[i]=='Y') score += 2;
            if (s[i]=='G') score += 3;
            if (s[i]=='N') score += 4;
            if (s[i]=='B') score += 5;
            if (s[i]=='P') score += 6;
            if (s[i]=='K') score += 7;
        }
        if (ok)
            cout << score << "\n";
        else
            cout << "WRONG_INPUT\n";
    }

    return 0;
}