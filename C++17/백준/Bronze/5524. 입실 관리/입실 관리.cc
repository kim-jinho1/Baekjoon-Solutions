#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        for (auto& c : s)
            c = tolower(c);
        cout << s << "\n";
    }
}