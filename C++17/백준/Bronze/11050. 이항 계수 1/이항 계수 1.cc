#include<iostream>
using namespace std;

int factorial(int x) {
	int result = 1;
	for (int i = 1; i <= x; i++)
		result *= i;
	return result;
}

int main() {
	int n, m;
	cin >> n >> m;

	int result = factorial(n) / (factorial(m) * factorial(n - m));
	cout << result << endl;
}
