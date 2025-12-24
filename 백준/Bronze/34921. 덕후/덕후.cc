#include <iostream>
using namespace std;
int main() {
    int A, T;
    cin >> A >> T;
    int P = 10 + 2 * (25 - A + T);
    if (P < 0)
        P = 0;
    cout << P;
}