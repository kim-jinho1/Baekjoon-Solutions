#include <iostream>
using namespace std;
int main()
{
    long long K, N;
    cin >> K >> N;
    if (N == 1)
    {
        cout << -1;
        return 0;
    }
    long long numerator = N * K;
    long long denominator = N - 1;
    long long X = (numerator + denominator - 1) / denominator;
    cout << X;
    return 0;
}
