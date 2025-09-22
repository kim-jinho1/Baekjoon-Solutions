#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;

    for (int year = x; year <= y; year++)
        if ((year - x) % 60 == 0)
            cout << "All positions change in year " << year << '\n';
}