#include <iostream>
using namespace std;
int main() {
    int h, w;
    cin >> h >> w;
    int radiusCm = min(h, w) * 100 / 2;
    cout << radiusCm;
}