#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    char c = s[0];
    if (c == 'F')
        cout << "Foundation\n";
    else if (c == 'C')
        cout << "Claves\n";
    else if (c == 'V')
        cout << "Veritas\n";
    else if (c == 'E')
        cout << "Exploration\n";
}