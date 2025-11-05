#include <iostream>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int sum = 0;
    while (n > 0) {
        sum += n;
        n /= m;
    }
    cout << sum;
}