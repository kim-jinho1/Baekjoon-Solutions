#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a, b;
    cin >> a >> b;
    double m = (b - a) / 400.0;
    double r = 1.0 / (1.0 + pow(10.0, m));
    cout << fixed << r;
}