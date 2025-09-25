#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;
    cout << min(a * (b % 2), b * (a % 2));
}