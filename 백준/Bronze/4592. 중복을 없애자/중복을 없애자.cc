#include <iostream>
using namespace std;
int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) 
            break;
        int prev = -1;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (i == 0 || x != prev) {
                cout << x << " ";
            }
            prev = x;
        }
        cout << "$\n";
    }
}