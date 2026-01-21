#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, p;
    cin >> a >> b >> c >> d >> p;
    int costx = a * p;
    int costy = b;
    if (p > c)
        costy += (p - c) * d;
    cout << min(costx, costy);
    return 0;
}