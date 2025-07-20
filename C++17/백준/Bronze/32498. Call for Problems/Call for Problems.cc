#include <iostream>
using namespace std;

int main() {
    int n, d, cnt = 0;
    cin >> n;
    while (n--) {
        cin >> d;
        if (d % 2 == 1) cnt++;
    }
    cout << cnt << '\n';
}
