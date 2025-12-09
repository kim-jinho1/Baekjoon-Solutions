#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    double a;
    cin >> n;
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cin >> a;
        cout << '$' << a * 0.8 << '\n';
    }
}