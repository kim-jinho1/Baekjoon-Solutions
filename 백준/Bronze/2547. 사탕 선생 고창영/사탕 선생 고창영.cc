#include <iostream>
using namespace std;

int main() {
    unsigned long long t;
    cin >> t;

    while (t--) {
        unsigned long long n;
        cin >> n;

        unsigned long long a = 0;
        for (unsigned long long i = 0; i < n; i++) {
            unsigned long long b;
            cin >> b;
            a = (a + b) % n;
        }
        if (a == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}