#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int count1 = 0;
    if (a == 1) 
        count1++;
    if (b == 1) 
        count1++;
    if (c == 1)
        count1++;
    if (count1 >= 2)
        cout << 1;
    else
        cout << 2;
}