#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    
    string rs = "";
    for (int i=n-1;i>=0;i--)
        rs += s[i];
    
    string a[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    string b[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string c[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string d[] = {"", "thousand", "million", "billion", "trillion"};

    if (rs == "0"){
        cout << "zero";
        return 0;
    }

    for (int i=n-1;i>=0;i--){
        if (i%3==0){
            if (rs[i] != '0')
                cout << a[rs[i] - '0'] << " ";
            if (i+2 < n && rs[i+1] == '0' && rs[i+2] == '0')
                continue;
            cout << d[i/3] << " ";
        }else if (i%3==1){
            if (rs[i] == '0') continue;
            if (rs[i-1] == '0')
                cout << c[rs[i] - '0'] << " ";
            else{
                if (rs[i] == '1'){
                    cout << b[rs[i-1] - '0'] << " ";
                    cout << d[(i-1)/3] << " ";
                    i--;
                }else{
                    cout << c[rs[i] - '0'] << " ";
                }
            }
        }else{
            if (rs[i] == '0') continue;
            cout << a[rs[i] - '0'] << " hundred ";
        }
    }

    return 0;
}