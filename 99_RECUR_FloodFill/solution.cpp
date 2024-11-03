#include <iostream>
using namespace std;
const int R = 7, C = 7;

pair<int,int> dir[] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

void floodfill(int x[][C], int r, int c, int e) {
    if (x[r][c] == 0)
        x[r][c] = e;
    for (int i=0;i<4;i++){
        int R = r + dir[i].first, C = c + dir[i].second;
        if (R >= 0 && C >= 0 && R < 7 && C < 7 && x[R][C] == 0)
            floodfill(x, R, C, e);
    }
}

int main() {
    int x[][C] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}};
    for (int r=0; r<R; ++r)
    for (int c=0; c<C; ++c)
    cin >> x[r][c];
    int row, col, e;
    cin >> row >> col >> e;
    floodfill(x, row, col, e);
    for (int r=0; r<R; ++r) {
    for (int c=0; c<C; ++c)
        cout << x[r][c] << ' ';
        cout << endl;
    }
}