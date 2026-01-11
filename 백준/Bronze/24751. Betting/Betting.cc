#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a;
    cin >> a;
    double x1 = 100.0 / a;
    double x2 = 100.0 / (100.0 - a);
    cout << fixed << setprecision(10) << x1 << "\n";
    cout << fixed << setprecision(10) << x2 << "\n";
    return 0;
}