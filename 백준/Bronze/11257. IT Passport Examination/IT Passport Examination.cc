#include <iostream>
using namespace std;
int main() {
    int n, a, b, c;
    string id;
    cin >> n;
    while (n--) {
        cin >> id >> a >> b >> c;
        int sum = a + b + c;
        bool pass = true;
        if (sum < 55) 
            pass = false;
        if (a < 11)
            pass = false;
        if (b < 8)
            pass = false;
        if (c < 12)
            pass = false;
        cout << id << " " << sum << " " << (pass ? "PASS" : "FAIL") << "\n";
    }
}