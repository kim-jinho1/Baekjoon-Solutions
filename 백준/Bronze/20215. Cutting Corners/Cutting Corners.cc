#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double w, h;
    cin >> w >> h;
    double rect = w + h;
    double diag = sqrt(w * w + h * h);
    cout << fixed << setprecision(9) << rect - diag;
    return 0;
}