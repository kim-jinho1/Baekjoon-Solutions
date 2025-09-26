#include <iostream>
using namespace std;
int main() {
    long long k, w, m;
    cin >> k >> w >> m;
    if (k >= w)
        cout << 0;
    else cout << (w - k + m - 1) 
        / m;
}