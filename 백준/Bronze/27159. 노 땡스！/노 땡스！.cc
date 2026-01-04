#include <iostream>
using namespace std;
int main() {
	int n, a, b = 0, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (abs(a - b) != 1)
			cnt += a;
		b = a;
	}
	cout << cnt << '\n';
}