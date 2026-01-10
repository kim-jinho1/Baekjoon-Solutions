#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int m = std::max({a, b, c});
    int result = (m - a) + (m - b) + (m - c);
    cout << result << '\n';
    return 0;
}