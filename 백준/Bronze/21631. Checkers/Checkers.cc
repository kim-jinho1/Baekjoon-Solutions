#include <iostream>
using namespace std;
int main() {
    long long a, b;
    cin >> a >> b;
    if (b == 0)
        cout << 0;
    else
        cout << min(b, a + 1);
}