#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> a(5, vector<int>(5));
vector<vector<int>> b;
int cnt=0;

int getCol(char x){
    if (x=='B') return 0;
    else if (x=='I') return 1;
    else if (x=='N') return 2;
    else if (x=='G') return 3;
    return 4;
}

char getChar(int col){
    if (col == 0) return 'B';
    else if (col == 1) return 'I';
    else if (col == 2) return 'N';
    else if (col == 3) return 'G';
    return 'O';
}

bool checkWin(){
    bool ret = false;
    bool flag = true;
    int i, j;

    //Horizontal
    for (i=0;i<5;i++){
        flag = true;
        for (j=1;j<5;j++)
            flag = flag && a[i][j]==a[i][j-1];
        if (flag)
            break;
    }
    if (flag){
        if (cnt!=0){
            cout << cnt << "\n";
            cnt=0;
        }
        for (int j=0;j<5;j++){
            if (i==2 && j==2) continue;
            cout << getChar(j) << b[i][j];
            if (j!=4) cout << ", ";
        }
        cout << "\n";
    }
    ret = ret || flag;

    //Vertical
    for (j=0;j<5;j++){
        flag = true;
        for (i=1;i<5;i++)
            flag = flag && a[i][j]==a[i-1][j];
        if (flag)
            break;
    }
    if (flag){
        if (cnt!=0){
            cout << cnt << "\n";
            cnt=0;
        }
        for (int i=0;i<5;i++){
            if (i==2 && j==2) continue;
            cout << getChar(j) << b[i][j];
            if (i!=4) cout << ", ";
        }
        cout << "\n";
    }
    ret = ret || flag;

    //UL to BR
    flag = true;
    for (int i=1;i<5;i++)
        flag = flag && a[i][i] == a[i-1][i-1];
    if (flag){
        if (cnt!=0){
            cout << cnt << "\n";
            cnt=0;
        }
        for (int i=0;i<5;i++){
            if (i==2) continue;
            cout << getChar(i) << b[i][i];
            if (i!=4) cout << ", ";
        }
        cout << "\n";
    }
    ret = ret || flag;

    //BL to UR
    flag = true;
    for (int i=3;i>=0;i--)
        flag = flag && a[i][4-i]==a[i+1][4-(i+1)];
    if (flag){
        if (cnt!=0){
            cout << cnt << "\n";
            cnt=0;
        }
        for (int i=4;i>=0;i--){
            if (i==2 && 4-i==2) continue;
            cout << getChar(4-i) << b[i][4-i];
            if (i!=0) cout << ", ";
        }
        cout << "\n";
    }
    ret = ret || flag;
    return ret;
}

int main(){
    string _;
    getline(cin,_);
    char temp;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            if (i == 2 && j == 2)
                cin >> temp;
            else
                cin >> a[i][j];
        }
    }
    b=a;
    string call;
    while (cin >> call){
        int col = getCol(call[0]);
        cnt++;
        for (int i=0;i<5;i++)
            if (a[i][col] == stoi(call.substr(1)))
                a[i][col] = 0;
        if (checkWin())
            break;
    }

    return 0;
}