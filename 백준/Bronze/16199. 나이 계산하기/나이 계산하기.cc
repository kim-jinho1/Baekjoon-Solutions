#include <iostream>
using namespace std;
int main() {
    int by, bm, bd, cy, cm, cd;
    cin >> by >> bm >> bd;
    cin >> cy >> cm >> cd;
    int man = cy - by;
    if (cm < bm || (cm == bm && cd < bd))
        man--;
    int se = cy - by + 1;
    int yeon = cy - by;
    cout << man << "\n" << se << "\n" << yeon;
}