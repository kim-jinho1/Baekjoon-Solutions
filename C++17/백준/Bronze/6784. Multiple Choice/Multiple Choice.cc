#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<char> s(n), a(n);
    for (int i = 0; i < n; i++) 
        cin >> s[i];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    int c = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == a[i])
            c++;
    cout << c << "\n";
}