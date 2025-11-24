#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < (int)s.size(); i += 2) {
        char p = s[i];
        int v = s[i+1] - '0';
        if (p == 'A')
            a += v;
        else
            b += v;

        if (a >= 11 || b >= 11) {
            if (!(a >= 10 && b >= 10)) {
                cout << (a > b ? 'A' : 'B');
                return 0;
            }
        }
        if (a >= 10 && b >= 10) {
            if (abs(a - b) >= 2) {
                cout << (a > b ? 'A' : 'B');
                return 0;
            }
        }
    }
    cout << (a > b ? 'A' : 'B');
}