#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    a = arr[0];
    b = arr[1];
    c = arr[2];
    if (a + b <= c)
        cout << 0 << endl;
    else if (a == b && b == c)
        cout << 2 << endl;
    else if (a*a + b*b == c*c)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}