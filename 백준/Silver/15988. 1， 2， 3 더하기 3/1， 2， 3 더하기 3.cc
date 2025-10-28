#include <iostream>
using namespace std;
int main()
{
    long  long dp[1000000] = { 0 };
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    long  long n, k;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        cin >> k;
        for (long long j = 3; j <= k; j++)
            dp[j] = (dp[j - 1] + dp[j - 2] + dp[j - 3]) % 1000000009;
        cout << dp[k] << '\n';
    }
}