#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, k, x;
    cin >> a >> b;
    cin >> k >> x;

    int left = max(a, k - x);
    int right = min(b, k + x);

    if (left > right)
        cout << "IMPOSSIBLE\n";
    else
        cout << (right - left + 1) << "\n";
}