#include<iostream>
#include <stack>
using namespace std;

int main()
{
	int n, cnt = 0;
	cin >> n;
	stack<int> v;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a != 0)
			v.push(a);
		else
			v.pop();
	}

	while (!v.empty())
	{
		cnt += v.top();
		v.pop();
	}
	cout << cnt;

}