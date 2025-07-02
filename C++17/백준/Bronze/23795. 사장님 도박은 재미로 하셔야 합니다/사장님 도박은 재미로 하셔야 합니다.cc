#include<iostream>
using namespace std;

int main() {
	int n = 0, m;
	while (true) {
		cin >> m;
		if (m == -1) 
			break;

		n += m;
	}
	cout << n << '\n';
}