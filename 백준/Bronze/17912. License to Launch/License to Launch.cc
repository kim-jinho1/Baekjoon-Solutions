#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long x, mn;
    int idx = 0;
    cin >> mn;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x < mn) {
            mn = x;
            idx = i;
        }
    }
    cout << idx;
}