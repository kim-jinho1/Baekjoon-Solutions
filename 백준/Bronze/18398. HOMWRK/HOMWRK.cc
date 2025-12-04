#include <iostream>
using namespace std;
int main() {
	int t, n, a, b;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			cout << a + b << ' ' << a * b << '\n';
		}
	}
}