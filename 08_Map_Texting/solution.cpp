#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<char, int> mp1 = {{'a', 2}, {'d',3}, {'g',4}, {'j', 5}, {'m',6}, {'p',7}, {'t',8}, {'w',9}};
    map<char, char> mp2 = {{'2','a'}, {'3','d'}, {'4','g'}, {'5','j'}, {'6','m'}, {'7','p'}, {'8','t'}, {'9','w'}};
    string a, b;
    while (cin >> a){
        cin.ignore();
        getline(cin, b);
        cout << ">> ";
        if (a == "T2K"){
            for (auto e : b){
                if (!isalpha(e)){
                    if (e == ' ')
                        cout << 0 << " ";
                    continue;
                }
                char x = tolower(e);
                char start = 'a';
                while (start <= 'z'){
                    int icm;
                    if (start == 'p' || start == 'w') icm = 4;
                    else icm = 3;
                    if (start <= x && x < start + icm){
                        for (int i=0;i<x-start+1;i++)
                            cout << mp1[start];
                    }
                    start += icm;
                }
                cout << " ";
            }
        }else{
            b += ' ';
            string curr = "";
            for (auto e : b){
                if (e != ' ') curr += e;
                else{
                    if (curr == "0") cout << " ";
                    else cout << (char)(mp2[curr[0]] + curr.size() - 1);
                    curr = "";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}