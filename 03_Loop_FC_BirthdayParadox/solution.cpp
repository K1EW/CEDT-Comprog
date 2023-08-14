#include <iostream>

using namespace std;

int main(){
    float p;
    cin >> p;
    float k=0, t=1;
    do{
        k++;
        t = t*(365-(k-1))/365;
    }while(1-t < p);
    cout << k;

    return 0;
}