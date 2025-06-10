#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
	int a, b = 0;
	cin >> a;
	map<string, int> m;
	string c;
	for (int i = 0; i < a; i++)
	{
		string s;
		cin >> s;
		m[s]++;
	}
	for (auto& s : m) {
		if (s.second > b){
			b = s.second;
			c = s.first;
		}
	}
	cout << c << '\n';
}