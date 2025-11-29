#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double a1, p1;
    double r1, p2;
    cin >> a1 >> p1;
    cin >> r1 >> p2;
    double slice = a1 / p1;
    double whole = (M_PI * r1 * r1) / p2;
    if (whole > slice)
        cout << "Whole pizza";
    else
        cout << "Slice of pizza";
}