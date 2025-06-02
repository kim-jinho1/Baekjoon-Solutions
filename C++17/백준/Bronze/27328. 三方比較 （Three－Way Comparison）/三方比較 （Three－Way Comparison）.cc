#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n;
	cin >> m;
	if(n < m)
		cout << -1 << endl;
	else if (n > m)
		cout << 1 << endl;
	else
		cout << 0 << endl;
}