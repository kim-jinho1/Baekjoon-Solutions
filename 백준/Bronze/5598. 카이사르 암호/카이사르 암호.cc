#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    for (char c : s) {
        char orig = c - 3;
        if (orig < 'A') 
            orig += 26;
        cout << orig;
    }
    cout << '\n';
}