#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double n;
    while (cin >> n && n != 0) {
        double result = 1.0 + n + (n * n) + (n * n * n) + (n * n * n * n);
        cout << fixed << setprecision(2) << result << endl;
    }
}