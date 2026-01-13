#include <iostream>
using namespace std;
int main() {
    int n, d;
    cin >> n >> d;
    int a[30];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int value = d / sum;
    for (int i = 0; i < n; i++)
        cout << a[i] * value << '\n';
    return 0;
}