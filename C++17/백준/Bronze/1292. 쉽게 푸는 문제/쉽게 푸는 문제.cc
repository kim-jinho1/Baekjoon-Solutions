#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, m, cnt = 0;
	vector<int> v;
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
		for (int j = 0; j < i; j++)
			v.push_back(i);

	for (int i = n - 1; i < m; i++)
		cnt += v[i];

	cout << cnt << endl;
}
