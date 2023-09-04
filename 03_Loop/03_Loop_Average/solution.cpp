#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double cnt=0,sum=0,x=0;
    while(true){
        cin >> x;
        if (x==-1)
            break;
        sum += x;
        cnt++;
    }
    if (cnt!=0) cout << round((sum/cnt)*100)/100;
    else cout << "No Data";

    return 0;
}