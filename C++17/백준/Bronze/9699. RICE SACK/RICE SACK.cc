#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int sack[5];
        for (int j = 0; j < 5; j++)
            cin >> sack[j];
        int mx = *max_element(sack, sack + 5);
        cout << "Case #" << i << ": " << mx << "\n";
    }
}