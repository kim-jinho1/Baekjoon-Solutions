#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    int xp, yp, zp;
    cin >> x >> y >> z;
    cin >> xp >> yp >> zp;
    int halfA = (x + 1) / 2;
    int halfC = (y + 1) / 2;
    if (xp == x && yp == y && zp == z)
        cout << "A";
    else if (yp == y && zp == z && xp >= halfA)
        cout << "B";
    else if (yp == y && zp == z)
        cout << "C";
    else if (zp == z && yp >= halfC)
        cout << "D";
    else
        cout << "E";
}