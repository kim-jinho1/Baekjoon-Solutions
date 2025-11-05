#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, a = 0, b = 1, c = 1;
	cin >> n;
	if (n == 0) {
		cout << 0 << '\n';
		return 0;
	}
	else if (n == 1 || n == 2)
	{
		cout << 1 << '\n';
		return 0;
	}
	for (int i = 2; i < n; i++)
	{
		a = (b + c) % 1000000007;
		c = b;
		b = a;
	}
	cout << a << '\n';
}