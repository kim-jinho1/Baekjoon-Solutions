#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    cout << s.substr(n - 5, 5);
}