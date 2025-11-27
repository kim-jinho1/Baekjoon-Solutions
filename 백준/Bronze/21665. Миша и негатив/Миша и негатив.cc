#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string a[101], b[101];
    for (int i = 0; i < n; i++) cin >> a[i];

    string empty;
    getline(cin, empty);

    for (int i = 0; i < n; i++) cin >> b[i];

    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) {
            char neg = (a[i][j] == 'B' ? 'W' : 'B');
            if (neg != b[i][j]) cnt++;
        }

    cout << cnt;
}