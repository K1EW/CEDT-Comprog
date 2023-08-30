#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string line, char delimiter) {
    vector<string> ret;
    string curr = "";
    for (auto e : line){
        if (e != delimiter) curr += e;
        else{
            if (curr.size()!=0)
                ret.push_back(curr);
            curr = "";
        }
    }
    if (curr.size()!=0)
        ret.push_back(curr);
    return ret;
}
int main() {
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }
}
