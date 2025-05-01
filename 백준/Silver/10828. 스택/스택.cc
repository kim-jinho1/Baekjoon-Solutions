#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
	stack<int> s;

    for (int i = 0; i < n; i++)
    {
        string str;
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			s.push(x);
		}
		else if (str == "pop") {
			if (s.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}
		else if (str == "size") {
			cout << s.size() << endl;
		}
		else if (str == "empty") {
			cout << s.empty() << endl;
		}
		else if (str == "top") {
			if (s.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << s.top() << endl;
			}
		}
    }
}