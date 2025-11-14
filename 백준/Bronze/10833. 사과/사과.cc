#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int s, a, sum = 0;
    while (n--) {
        cin >> s >> a;
        sum += a % s;
    }
    cout << sum;
}