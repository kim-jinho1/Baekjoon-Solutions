#include <iostream>
using namespace std;
int main()
{
	int c, b, a;
	cin >> c;
	b = c / 10;
	a = c - (b * 10);
	if(b == a)
		cout << "1" << endl;
	else
		cout << "0" << endl;
}