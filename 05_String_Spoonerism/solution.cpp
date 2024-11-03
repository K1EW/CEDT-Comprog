#include <iostream>

using namespace std;

string getInit(string a){
    for (int i=0;i<a.size();i++){
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            return a.substr(0,i);
    }
    return a;
}

string getVowel(string a){
    for (int i=0;i<a.size();i++){
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
            return a.substr(i,a.length()-i);
    }
    return "";
}

int main(){
    string s;
    getline(cin, s);
    s += " ";
    string a[s.length()];
    string t = "";
    int j=0;
    for (int i=0;i<s.size();i++){
        if (s[i] != ' ') t += s[i];
        else{
            a[j++] = t;
            t = "";
        }
    }

    string temp1 = a[0], temp2 = a[j-1];
    a[0] = getInit(temp1) + getVowel(temp2);
    a[j-1] = getInit(temp2) + getVowel(temp1);

    for (int i=0;i<j;i++)
        cout << a[i] << " ";

    return 0;
}