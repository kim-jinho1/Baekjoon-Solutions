#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int num1 = a + c;
    int num2 = b + d;

    if (num1 < num2)
        cout << "Hanyang Univ.\n";
    else if (num1 > num2)
        cout << "Yongdap\n";
    else 
        cout << "Either\n";
}