#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, a, b;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
		cin >> a >> b;
		v.push_back({ b, a });
    }
	sort(v.begin(), v.end());
    int cnt = 0, endTime = 0;
    for (auto n : v) {
        if (endTime <= n.second) {
			endTime = n.first;
            cnt++;
        }
    }
	cout << cnt << '\n';
}