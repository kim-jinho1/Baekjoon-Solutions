#include <iostream>
using namespace std;

int main() {
    int a, d, c;
    cin >> a >> d >> c;

    if (d == 0) 
        cout << "X" << endl;

    int b = c - a;

    if (b % d == 0) {
        int n = b / d + 1;
        if (n > 0)
            cout << n << endl;
        else
            cout << "X" << endl;
    }
    else 
        cout << "X" << endl;
}
