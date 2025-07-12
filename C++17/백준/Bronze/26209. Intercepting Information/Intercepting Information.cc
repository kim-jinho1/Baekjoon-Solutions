#include <iostream>
using namespace std;

int main() {
    int bit;
    bool success = true;

    for (int i = 0; i < 8; ++i) {
        cin >> bit;
        if (bit == 9) {
            success = false;
        }
    }

    cout << (success ? 'S' : 'F') << endl;
}