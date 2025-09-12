#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d, n, s, p;
        cin >> d >> n >> s >> p;

        long long serial_time = 1LL * n * s;
        long long parallel_time = d + 1LL * n * p;

        if (serial_time < parallel_time)
            cout << "do not parallelize\n";
        else if (serial_time > parallel_time)
            cout << "parallelize\n";
        else
            cout << "does not matter\n";
    }
}