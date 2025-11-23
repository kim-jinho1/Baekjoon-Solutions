#include <iostream>
using namespace std;
int main() {
    int l;
    cin >> l;
    while (l--) {
        int n;
        char x;
        cin >> n >> x;
        for (int i = 0; i < n; i++) 
            cout << x;
        cout << '\n';
    }
}