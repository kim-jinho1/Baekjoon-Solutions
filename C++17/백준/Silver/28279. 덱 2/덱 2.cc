#include<iostream>
#include<deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    deque<int> d;

    while (n--) {
        int cmd, x;
        cin >> cmd;

        if (cmd == 1) {
            cin >> x;
            d.push_front(x);
        }
        else if (cmd == 2) {
            cin >> x;
            d.push_back(x);
        }
        else if (cmd == 3) {
            if (d.empty())
                cout << -1 << '\n';
            else {
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        else if (cmd == 4) {
            if (d.empty())
                cout << -1 << '\n';
            else {
                cout << d.back() << '\n';
                d.pop_back();
            }
        }
        else if (cmd == 5) {
            cout << d.size() << '\n';
        }
        else if (cmd == 6) {
            cout << (d.empty() ? 1 : 0) << '\n';
        }
        else if (cmd == 7) {
            if (d.empty())
                cout << -1 << '\n';
            else
                cout << d.front() << '\n';
        }
        else if (cmd == 8) {
            if (d.empty())
                cout << -1 << '\n';
            else
                cout << d.back() << '\n';
        }
    }
}
