#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b < c * 2)
		cout << a + b << endl;
	else
		cout << (a + b) - c * 2 << endl;
}
