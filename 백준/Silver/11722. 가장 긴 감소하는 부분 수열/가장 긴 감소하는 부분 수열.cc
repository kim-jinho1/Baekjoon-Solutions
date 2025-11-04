#include <iostream>
#include <algorithm>
using namespace std;
int x;
int N;
int M[1000];
int dp[1000];
int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> M[i];
    dp[0] = 1;
    for (int i = 0; i < N; i++)
    {
        int k = 0;
        for (int j = 0; j < i; j++)
            if (M[i] < M[j] && k < dp[j])
                k = dp[j];
        dp[i] = k + 1;
    }
    for (int i = 0; i < N; i++)
        if (dp[i] > x)
            x = dp[i];
    cout << x << endl;
}