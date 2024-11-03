#include <iostream>

using namespace std;

int main(){
    string p;
    while (cin >> p){
        int upperCnt=0, lowerCnt=0, numCnt=0, speCnt=0;
        for (int i=0;i<p.size();i++){
            if (p[i] >= 'A' && p[i] <= 'Z')
                upperCnt++;
            else if (p[i] >= 'a' && p[i] <= 'z')
                lowerCnt++;
            else if (p[i] >= '0' && p[i] <= '9')
                numCnt++;
            else
                speCnt++;
        }
        if (p.size() >= 12 && upperCnt && lowerCnt && numCnt && speCnt)
            cout << ">> strong\n";
        else if (p.size() >= 8 && upperCnt && lowerCnt && numCnt)
            cout << ">> weak\n";
        else
            cout << ">> invalid\n";
    }

    return 0;
}