#include <iostream>
#include <numeric>
using namespace std;
int main()
{
    long long p1, q1, p2, q2;
    cin >> p1 >> q1 >> p2 >> q2;
    long long n = p1 * p2;
    long long d = 2 * q1 * q2;
    long long g = gcd(n, d);
    n /= g;
    d /= g;
    cout << (d == 1 ? 1 : 0);
}