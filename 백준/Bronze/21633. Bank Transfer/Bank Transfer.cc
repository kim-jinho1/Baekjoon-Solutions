#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    long long k;
    cin >> k;
    double commission = 25.0 + k * 0.01;
    if (commission < 100.0)
        commission = 100.0;
    if (commission > 2000.0) 
        commission = 2000.0;
    cout << fixed << setprecision(2) << commission;
}