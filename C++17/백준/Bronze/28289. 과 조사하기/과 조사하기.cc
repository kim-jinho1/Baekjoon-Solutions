#include <iostream>
using namespace std;

int main() {
    int p;
    cin >> p;

    int sw = 0, em = 0, ai = 0, f = 0;

    for (int i = 0; i < p; i++) {
        int g, c, n;
        cin >> g >> c >> n;

        if (g == 1) f++;
        else {
            if (c == 1 || c == 2) sw++;
            else if (c == 3) em++;
            else ai++;
        }
    }

    cout << sw << "\n" << em << "\n" << ai << "\n" << f << "\n";
}
