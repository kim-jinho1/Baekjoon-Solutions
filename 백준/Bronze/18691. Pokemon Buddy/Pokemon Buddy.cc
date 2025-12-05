#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int g, c, e;
        cin >> g >> c >> e;
        int km_per = (g == 1 ? 1 : (g == 2 ? 3 : 5));
        int need = e - c;
        if (need <= 0)
            cout << 0 << "\n";
        else
            cout << need * km_per << "\n";
    }
}