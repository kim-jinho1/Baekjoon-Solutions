#include <iostream>
using namespace std;
int main() {
    int z;
    cin >> z;
    while (z--) {
        long long w, k;
        cin >> w >> k;
        cout << (w * k) / 2 << '\n';
    }
}