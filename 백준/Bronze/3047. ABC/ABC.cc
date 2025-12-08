#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a[3];
    string s;
    cin >> a[0] >> a[1] >> a[2];
    cin >> s;
    sort(a, a + 3);
    for (char c : s)
        cout << a[c - 'A'] << ' ';
}