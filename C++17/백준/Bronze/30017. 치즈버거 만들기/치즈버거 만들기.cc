#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int p = min(a, b + 1);
    int c = p - 1;
    cout << p + c;
}