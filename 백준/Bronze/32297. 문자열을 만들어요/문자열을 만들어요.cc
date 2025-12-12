#include <iostream>
using namespace std;
int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    cout << (s.find("gori") != string::npos ? "YES" : "NO") << '\n';
}