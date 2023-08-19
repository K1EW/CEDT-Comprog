#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n; cin.ignore();
    string end = "Y G N B P K";
    while(n--){
        string s;
        getline(cin, s);
        int l = s.size(), state = 0;
        int cnt=0, score=0;
        bool invalid = false;
        int j=0;
        if (s[0] != 'R'){
            cout << "WRONG_INPUT\n";
            continue;
        }
        for (int i=0;i<l;i+=2){
            if (state == 0){
                if (cnt%2==0 && s[i]=='R'){
                    score += 1;
                }else if (cnt%2==1 && s[i]!='R'){
                    if (s[i] == 'Y') score += 2;
                    if (s[i] == 'G') score += 3;
                    if (s[i] == 'N') score += 4;
                    if (s[i] == 'B') score += 5;
                    if (s[i] == 'P') score += 6;
                    if (s[i] == 'K') score += 7;
                }else{
                    state = 1;
                    i -= 2;
                }
                cnt++;
            }else{
                if (j < end.size() && s[i] == end[j]){
                    if (s[i] == 'Y') score += 2;
                    if (s[i] == 'G') score += 3;
                    if (s[i] == 'N') score += 4;
                    if (s[i] == 'B') score += 5;
                    if (s[i] == 'P') score += 6;
                    if (s[i] == 'K') score += 7;
                    j+=2;    
                }else{
                    invalid = true;
                    break;
                }
            }
        }
        if (invalid) cout << "WRONG_INPUT\n";
        else cout << score << "\n";
    }

    return 0;
}