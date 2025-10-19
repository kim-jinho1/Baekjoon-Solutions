#include <iostream>
using namespace std;
int main() {
    int r, a = 0, b = 0;
    for (int i = 1; i <= 9; i++) {
        cout << "? A " << i << endl;
        cin >> r;
        if (r == 1) { 
            a = i;
            break;
        }
    }
    for (int i = 1; i <= 9; i++) {
        cout << "? B " << i << endl;
        cin >> r;
        if (r == 1) {
            b = i;
            break; 
        }
    }
    cout << "! " << a + b << endl;
}