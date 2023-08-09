#include <iostream>

using namespace std;

int main(){
    string id1, com1,  cal1_1, cal2_1;
    string id2, com2, cal1_2, cal2_2;
    double gpax1, gpax2;
    cin >> id1 >> gpax1 >> com1 >> cal1_1 >> cal2_1;
    cin >> id2 >> gpax2 >> com2 >> cal1_2 >> cal2_2;

    if ((com1 > "A" || cal1_1 > "C" || cal2_1 > "C") && (com2 > "A" || cal1_2 > "C" || cal2_2 > "C")){
        cout << "None";
    }else if (com1 > "A" || cal1_1 > "C" || cal2_1 > "C"){
        cout << id2;
    }else if (com2 > "A" || cal1_2 > "C" || cal2_2 > "C"){
        cout << id1;
    }else{
        if (gpax1 > gpax2){
            cout << id1;
        }else if (gpax2 > gpax1){
            cout << id2;
        }else{
            if (cal1_1 < cal1_2){
                cout << id1;
            }else if (cal1_2 < cal1_1){
                cout << id2;
            }else{
                if (cal2_1 < cal2_2){
                    cout << id1;
                }else if (cal2_2 < cal2_1){
                    cout << id2;
                }else{
                    cout << "Both";
                }
            }
        }
    }

    return 0;
}