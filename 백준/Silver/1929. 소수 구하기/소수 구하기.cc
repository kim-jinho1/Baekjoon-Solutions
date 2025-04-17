#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i < 2) continue;
        bool c = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                c = false;
                break;
            }
        }
        if (c)
            cout << i << '\n';
    }
}
