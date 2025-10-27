#include <iostream>
using namespace std;
int main() {
    int ca, ba, pa;
    int cr, br, pr;
    cin >> ca >> ba >> pa;
    cin >> cr >> br >> pr;
    int result = 0;
    if (cr > ca)
        result += cr - ca;
    if (br > ba)
        result += br - ba;
    if (pr > pa)
        result += pr - pa;
    cout << result;
}