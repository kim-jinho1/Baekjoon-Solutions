#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int A, B;
    cin >> A >> B;
    int x = A + B;
    int y = A - B;
    cout << max(x, y) << '\n';
    cout << min(x, y) << '\n';
    return 0;
}
