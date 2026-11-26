#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int H, W, r1 = -1, c1, r2, c2;
    cin >> H >> W;

    for (int i = 0; i < H; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < W; j++) {
            if (row[j] == 'o') {
                if (r1 == -1) { r1 = i; c1 = j; }
                else { r2 = i; c2 = j; }
            }
        }
    }

    cout << abs(r1 - r2) + abs(c1 - c2) << '\n';
}