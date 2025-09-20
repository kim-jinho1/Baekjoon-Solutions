#include <iostream>
using namespace std;
int main() {
    int n, c, p;
    cin >> n >> c >> p;
    int m = c * p;
    if (n <= m)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}