#include <iostream>

using namespace std;


int findIdx(string names[], string name){
    int idx = -1;
    for (int i=0;i<10;i++){
        if (names[i] == name)
            idx = i;
    }

    return idx;
}

int main(){
    string fname[] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
    string nname[] = {"Dick", "Bill", "Jim", "Jack", "Peggy", "Ed", "Sally", "Andy", "Tony", "Debbie"};

    int n;
    cin >> n;
    while (n--){
        string name;
        cin >> name;
        int a = findIdx(fname, name);
        int b = findIdx(nname, name);
        if (a != -1)
            cout << nname[a] << "\n";
        else if (b != -1)
            cout << fname[b] << "\n";
        else
            cout << "Not found\n";
    }

    return 0;
}