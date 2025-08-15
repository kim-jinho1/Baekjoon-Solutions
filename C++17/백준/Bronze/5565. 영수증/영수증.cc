#include <iostream>
using namespace std;

int main() {
    int total, sum_known = 0, price;
    cin >> total;
    for (int i = 0; i < 9; i++) {
        cin >> price;
        sum_known += price;
    }
    cout << (total - sum_known) << "\n";
}
