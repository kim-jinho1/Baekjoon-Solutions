#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int y = 2024;
    int m = 8;
    int sum = m + (n - 1) * 7;

    int year = y + (sum - 1) / 12;
    int month = sum % 12;
    if (month == 0) month = 12;

    cout << year << " " << month << endl;
}
