#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool num1 = to_string(n).find('7') != string::npos;
    bool num2 = (n % 7 == 0);

    if (num1 && num2) cout << 3;
    else if (!num1 && num2) cout << 1;
    else if (num1 && !num2) cout << 2;
    else cout << 0;
}
