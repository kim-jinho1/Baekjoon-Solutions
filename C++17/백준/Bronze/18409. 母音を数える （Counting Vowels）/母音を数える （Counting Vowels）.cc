#include <iostream>
using namespace std;
int main()
{
	int a, b = 0;
    string s;
	cin >> a;
    cin >> s;

	for (int i = 0; i < a; i++)
	{
		if (s[i] == 'a')
			b++;
		else if (s[i] == 'i')
			b++;
		else if (s[i] == 'u')
			b++;
		else if (s[i] == 'e')
			b++;
		else if (s[i] == 'o')
			b++;
	}
	cout << b << endl;
}