#include <iostream>
using namespace std;
int main() {
    int n, a, b;
    cin >> n;
    cin >> a >> b;
    int possible = a / 2 + b;
    if (possible > n)
        possible = n;
    cout << possible;
}