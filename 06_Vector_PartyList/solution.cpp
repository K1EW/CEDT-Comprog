#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

bool cmp1(tuple<int, double, double, string> x, tuple<int, double, double, string> y){
    return get<2>(x)-get<0>(x) > get<2>(y)-get<0>(y);
}

int main(){
    double total = 0;
    vector<tuple<int, double, double, string>> parties;
    while (true){
        string party;
        double score;
        cin >> party;
        if (party == "END") break;
        cin >> score;
        total += score;
        parties.push_back(make_tuple(0, score, 0, party));
    }
    double avg = total/100;
    int totalMp = 0;
    for (auto &party : parties){
        get<2>(party) = get<1>(party)/avg;
        get<0>(party) = (int)get<2>(party);
        totalMp += get<0>(party);
    }
    sort(parties.begin(), parties.end(), cmp1);
    for (int i=0;i<100-totalMp;i++)
        get<0>(parties[i])++;
    sort(parties.begin(), parties.end(), greater<tuple<int, double, double, string>>());
    for (auto party: parties)
        if (get<0>(party))
            cout << get<3>(party) << " " << get<0>(party) << " " << (int)get<1>(party) << "\n";
    

    return 0;
}