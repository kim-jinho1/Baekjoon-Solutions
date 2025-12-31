#include <iostream>
using namespace std;
int main()
{
    long long A, B, C;
    cin >> A >> B >> C;
    long long v1 = (long long)((double)(A * B) / C);
    long long v2 = (long long)((double)A / B * C);
    cout << max(v1, v2);
}