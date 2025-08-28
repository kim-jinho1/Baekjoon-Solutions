#include<iostream>
#include<set>
using namespace std;
int main()
{
	int a, b, d;
	char c;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> b;
		multiset<int> ms;
		for (int i = 0; i < b; i++)
		{
			cin >> c >> d;
			if (c == 'I')
				ms.insert(d);
			else if (c == 'D' && !ms.empty()) {
				if (d == 1)
					ms.erase(prev(ms.end()));
				else if (d == -1)
					ms.erase(ms.begin());
			}
		}
		if (ms.empty())
			cout << "EMPTY" << '\n';
		else
			cout << *prev(ms.end()) << " " << *ms.begin() << '\n';
	}
}