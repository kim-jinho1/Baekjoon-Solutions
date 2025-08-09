#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int b1, b2, b3;
    int d1, d2;
    cin >> b1 >> b2 >> b3;
    cin >> d1 >> d2;
    int minB = min({b1, b2, b3});
    int minD = min(d1, d2);
    int ans = minB + minD - 50;
    cout << ans << endl;
}