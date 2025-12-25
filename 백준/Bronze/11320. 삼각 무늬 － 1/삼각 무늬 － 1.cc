#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long A, B;
        cin >> A >> B;
        long long n = A / B;
        cout << n * n << '\n';
    }
}