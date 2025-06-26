#include<iostream>
#include<stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n;
	cin >> n;
	stack<int> s;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x == 1) {
			cin >> x;
			s.push(x);
		}
		else if (x == 2) {
			if (s.empty()) cout << -1 << '\n';
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if(x == 3)
			cout << s.size() << "\n";
		else if (x == 4) {
			if(s.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if(x == 5)
			if (s.empty())
				cout << -1 << "\n";
			else
				cout << s.top() << "\n";
	}
}
