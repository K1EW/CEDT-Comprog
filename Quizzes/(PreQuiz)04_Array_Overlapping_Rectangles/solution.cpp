#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int llx[n], lly[n];
    int urx[n], ury[n];
    int maxO=0;
    for (int i=0;i<n;i++){
        int x1,y1,x2,y2;
        cin >> llx[i] >> lly[i] >> urx[i] >> ury[i];
    }
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            int area = 0;
            int w = min(urx[i],urx[j]) - max(llx[i],llx[j]);
            int h = min(ury[i], ury[j]) - max(lly[i],lly[j]);
            if (w >= 1 && h >= 1)
                area = w*h;
            if (area > maxO){
                maxO = area;
            }
        }
    }
    if (maxO == 0){
        cout << "No overlaps";
        return 0;
    }
    cout << "Max overlapping area = " << maxO << "\n";
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            int area = 0;
            int w = min(urx[i],urx[j]) - max(llx[i],llx[j]);
            int h = min(ury[i], ury[j]) - max(lly[i],lly[j]);
            if (w >= 1 && h >= 1)
                area = w*h;
            if (area == maxO)
                cout << "rectangles " << i << " and " << j << "\n";
        }
    }

    return 0;
}