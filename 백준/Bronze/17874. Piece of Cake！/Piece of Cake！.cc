#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, h, v;
    cin >> n >> h >> v;
    int maxWidth = max(v, n - v);
    int maxHeight = max(h, n - h);
    cout << maxWidth * maxHeight * 4;
}