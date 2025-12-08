#include <iostream>
#include <string>
using namespace std;
int main() {
	int t, n, p1, p2;
	char c1, c2;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		p1 = p2 = 0;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> c1 >> c2;
			if (c1 == c2)
				continue;
			else if ((c1 == 'R' && c2 == 'S') || (c1 == 'P' && c2 == 'R') || (c1 == 'S' && c2 == 'P'))
				p1++;
			else
				p2++;
		}
		if (p1 == p2)
			cout << "TIE";
		else if (p1 > p2)
			cout << "Player 1";
		else
			cout << "Player 2";
		cout << endl;
	}
}