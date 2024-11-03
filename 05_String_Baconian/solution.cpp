#include <iostream>

using namespace std;

string getCode(char c){
    if (!isdigit(c)){
        if (c == '-')
            return "1010";
        else
            return "1011";
    }
    int dec = c - '0';
    string ret = "0000";
    for (int i=0;i<4;i++){
        if (dec & 1<<i)
            ret[3-i] = '1';
    }
    return ret;
}

char getVal(string a){
    int ret = 0;
    for (int i=3;i>=0;i--)
        if (islower(a[i]))
            ret += 1<<(3-i);
    if (ret == 10) return '-';
    else if (ret == 11) return ',';
    return ret + '0';
}

int main(){
    string s;
    getline(cin,s);
    int cntAlpha = 0;
    for (char e : s)
        if (isalpha(e))
            cntAlpha++;
    string cmd;
    while(getline(cin, cmd)){
        char code = cmd[0];
        string p = cmd.substr(2, cmd.length()-2);
        int pSize = p.length();
        if (code == 'E'){
            int cnt = 0;
            string enc = "";
            while (cnt+cntAlpha <= pSize*4){
                enc += s;
                cnt += cntAlpha;
            }
            for (int i=0;cnt != pSize*4;i++){
                enc += s[i];
                if (isalpha(s[i]))
                    cnt++;
            }
            int encIdx = 0;
            for (int i=0;i<pSize;i++){
                string cd = getCode(p[i]);
                for (int j=0;j<cd.size();j++){
                    while (!isalpha(enc[encIdx])){
                        cout << enc[encIdx];
                        encIdx++;
                    }
                    if (cd[j] == '1')
                        cout << (char)tolower(enc[encIdx]);
                    else
                        cout << (char)toupper(enc[encIdx]);
                    encIdx++;
                }
            }
        }else{
            string curr = "";
            for (int i=0;i<p.size();i++){
                if (!isalpha(p[i])) continue;
                curr += p[i];
                if (curr.size() == 4){
                    cout << getVal(curr);
                    curr = "";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}