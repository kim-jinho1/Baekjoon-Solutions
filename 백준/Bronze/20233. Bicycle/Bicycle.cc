#include <iostream>
using namespace std;
int main() {
    int a, x, b, y, t;
    cin >> a >> x >> b >> y >> t;
    int cost1 = a;
    if (t > 30)
        cost1 += (t - 30) * x * 21;
    int cost2 = b;
    if (t > 45)
        cost2 += (t - 45) * y * 21;
    cout << cost1 << " " << cost2;
}