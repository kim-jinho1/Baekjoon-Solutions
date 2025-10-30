#include <iostream>
using namespace std;
int main() {
    int n, cur = 0, maxs = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0)
            cur++;
        else cur = 0;
        if (cur > maxs)
            maxs = cur;
    }
    cout << maxs;
}