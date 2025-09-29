#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        string first, last;
        cin >> first >> last;
        cout << "Case " << i << ": " << last << ", " << first << "\n";
    }
}