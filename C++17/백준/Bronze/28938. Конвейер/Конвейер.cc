#include <iostream>
using namespace std;

int main() {
    int n, num, sum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        sum += num;
    }

    if (sum > 0)
        cout << "Right";
    else if (sum < 0)
        cout << "Left";
    else
        cout << "Stay";
}
