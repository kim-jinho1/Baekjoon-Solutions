#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, m, sum = 0, result = 0;
	cin >> n >> m;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];


	for (int i = 0; i < n - 2; i++)
		for (int j = i + 1; j < n - 1; j++)
			for (int k = j + 1; k < n; k++) {
				sum = v[i] + v[j] + v[k];
				if (sum > result && sum <= m) 
					result = sum;
			}
	cout << result;
}