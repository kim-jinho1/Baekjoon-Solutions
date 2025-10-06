#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string input, output;
        cin >> input >> output;
        if (input == output)
            cout << "OK\n";
        else
            cout << "ERROR\n";
    }
}