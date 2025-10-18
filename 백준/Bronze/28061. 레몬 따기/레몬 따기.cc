#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long max_val = 0;
    for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        long long cur = a - (n - i + 1);
        if (cur > max_val) 
            max_val = cur;
    }
    cout << max_val;
}