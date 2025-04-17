#include <iostream>
using namespace std;
int aa(int n)
{
	if (n == 0) 
		return 1;
	else if (n < 0)
		return 0;

	return aa(n - 3) + aa(n - 2) + aa(n - 1);
}
int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int c;
		cin >> c;
		cout << aa(c) << endl;
	}
}