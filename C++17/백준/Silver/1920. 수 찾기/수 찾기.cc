#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int  n, m;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int a;
		bool istrue = false;
		cin >> a;
		int left = 0, right = v.size() - 1, mid;
		while (left <= right) {
			mid = (left + right) / 2;
			if (a == v[mid]) {
				istrue = true;
				break;
			}
			else if (a > v[mid]) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}
		if (istrue)
			cout << 1 << '\n';
		else
			cout << 0 << '\n';
	}
}

