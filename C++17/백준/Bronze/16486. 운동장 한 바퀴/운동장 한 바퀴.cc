#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int d1, d2;
    cin >> d1 >> d2;
    const double PI = 3.141592;
    double result = 2.0 * d1 + 2.0 * PI * d2;
    cout << fixed << setprecision(6) << result << "\n";
}
