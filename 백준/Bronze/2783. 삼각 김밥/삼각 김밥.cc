#include <bits/stdc++.h>
using namespace std;
int main() {
    double x, y;
    cin >> x >> y;
    double min_price = x / y;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int xi, yi;
        cin >> xi >> yi;
        double price = (double)xi / yi;
        if (price < min_price)
            min_price = price;
    }
    double result = min_price * 1000.0;
    cout << fixed << setprecision(2) << result << "\n";
    return 0;
}