#include<iostream>
#include<deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n, k, m, c = 0;
    cin >> n >> k >> m;

    deque<int> d;
    for (int i = 1; i <= n; i++) 
        d.push_back(i);

    bool turn = false;

    while (!d.empty()) {
        if (!turn) {
            for (int i = 0; i < k - 1; i++) {
                d.push_back(d.front());
                d.pop_front();
            }
            cout << d.front() << '\n';
            d.pop_front();
            c++;
        }
        else {
            for (int i = 0; i < k - 1; i++) {
                d.push_front(d.back());
                d.pop_back();
            }
            cout << d.back() << '\n';
            d.pop_back();
            c++;
        }
		if (c == m) {
			c = 0;
            turn = !turn;
		}
    }
}
