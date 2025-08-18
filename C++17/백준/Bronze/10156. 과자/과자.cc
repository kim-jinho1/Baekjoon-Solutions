#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c;
	d = (a * b) - c;
	if (d > 0)
		cout << d << endl;
	else
		cout << 0 << endl;
}
