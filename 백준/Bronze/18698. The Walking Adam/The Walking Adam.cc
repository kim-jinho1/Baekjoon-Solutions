#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int i = 0;
        while (i < s.size() && s[i] == 'U')
            i++;
        cout << i << '\n';
    }
}