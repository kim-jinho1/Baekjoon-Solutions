#include <iostream>
using namespace std;
int main() {
    int t, a, b, c, d, e, cnt = 0;
    cin >> t >> a >> b >> c >> d >> e;
    if (a == t)
        cnt++;
    if (b == t) 
        cnt++;
    if (c == t) 
        cnt++;
    if (d == t) 
        cnt++;
    if (e == t) 
        cnt++;
    cout << cnt;
}