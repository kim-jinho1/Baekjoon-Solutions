#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int n, cnt = 0;
	cin >> n;

	vector<int> v;
	v.push_back(0);
	v.push_back(1);

	for (int i = 0; i < n; i++)
	{
		v.push_back(v[i] + v[i + 1]);
	}

	cout << v[n] << endl;
}