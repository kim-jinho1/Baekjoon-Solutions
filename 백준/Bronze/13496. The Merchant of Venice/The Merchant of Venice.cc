#include <iostream>
using namespace std;
int main() {
    int k;
    cin >> k;
    for (int t = 1; t <= k; t++) {
        int n, s, d;
        cin >> n >> s >> d;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int dist, val;
            cin >> dist >> val;
            if (dist <= s * d) 
                sum += val;
        }
        cout << "Data Set " << t << ":\n";
        cout << sum << "\n\n";
    }
}