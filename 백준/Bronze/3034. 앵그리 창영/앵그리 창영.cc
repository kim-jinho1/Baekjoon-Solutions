#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, w, h;
    cin >> n >> w >> h;
    double max_len = sqrt((double)w * w + (double)h * h);
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        if (l <= max_len)
            cout << "DA\n";
        else
            cout << "NE\n";
    }
    return 0;
}