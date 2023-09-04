#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        string a = s.substr(0,1);
        string b = s.substr(1,2);
        string c = s.substr(4,3);
        if (c != "999"){
            if (c[2] != '9') c[2]++;
            else{
                c[2] = '0';
                if (c[1] != '9') c[1]++;
                else{
                    c[1] = '0';
                    c[0]++;
                }
            }
        }else{
            c = "000";
            if (b[1] != 'Z') b[1]++;
            else{
                b[1] = 'A';
                if (b[0] != 'Z') b[0]++;
                else{
                    b[0] = 'A';
                    a = to_string(stoi(a)+1);
                }
            }
        }
        s = a + b + "-" + c;
    }

    cout << s;

    return 0;
}