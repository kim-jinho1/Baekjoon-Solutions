#include <iostream>
using namespace std;

int main() {
    int total = 0;
    for (int i = 0; i < 4; i++) {
        int t;
        cin >> t;
        total += t;
    }

    total += 300;

    if (total <= 1800)
        cout << "Yes\n";
    else
        cout << "No\n";
}
