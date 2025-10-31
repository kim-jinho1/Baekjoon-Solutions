#include <iostream>
using namespace std;

int main() {
    int n, t[101], s[101];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> t[i] >> s[i];

    int maxScore = -1, f = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] > maxScore) {
            maxScore = s[i];
            f = i;
        }
    }

    int P = 0;
    if (s[f] == 1 || s[f] == 4) P = t[f] + f * 20;
    cout << P;
}