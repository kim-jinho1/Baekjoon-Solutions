#include <iostream>
using namespace std;

int main() {
    string s = "WelcomeToSMUPC";
    int N;
    cin >> N;
    cout << s[(N - 1) % 14] << '\n';
}
