#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 5) {
        cout << 0;
        return 0;
    }
    int r = 1;
    for (int i = 1; i <= n; i++)
        r = (r * i) % 10;
    cout << r;
}