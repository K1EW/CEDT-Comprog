#include <bits/stdc++.h>

using namespace std;

vector<string> ans;

void search(string curr, string left){
    if (left == ""){
        ans.push_back(curr);
        return;
    }
    for (int i=0;i<left.size();i++){
        curr.push_back(left[i]);
        string newLeft = "";
        for (int j=0;j<left.size();j++)
            if (i!=j)
                newLeft.push_back(left[j]);
        search(curr, newLeft);
        curr.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    search("", s);
    sort(ans.begin(), ans.end());
    for (int i=0;i<ans.size();i++){
        if (i!=0&&ans[i-1]==ans[i]) continue;
        cout << ans[i] << " ";
    }

    return 0;
}