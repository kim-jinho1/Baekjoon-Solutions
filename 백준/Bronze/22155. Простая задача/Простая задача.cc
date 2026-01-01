#include <iostream>
using namespace std;
int main() {
    int n, j, f;
    cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> j >> f;
		if ((j <= 1 && f <= 2) || (j <= 2 && f <= 1))
			cout << "Yes" <<  endl;
		else
			cout << "No" << endl;
	}
	return 0;
}