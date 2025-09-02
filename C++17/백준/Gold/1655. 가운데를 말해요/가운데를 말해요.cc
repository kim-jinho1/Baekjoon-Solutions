#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t;
    int a;
    cin >> t;
    priority_queue<int> maxpq;
    priority_queue<int, vector<int>, greater<int>> minpq;
    for (int i = 1; i <= t; i++) {
        cin >> a;
        if (i == 1)
            maxpq.push(a);
        else if (maxpq.top() < a) {
            minpq.push(a);
            if (minpq.size() > maxpq.size()) {
                maxpq.push(minpq.top());
                minpq.pop();
            }
        }
        else {
            maxpq.push(a);
            if (maxpq.size() > minpq.size() + 1) {
                minpq.push(maxpq.top());
                maxpq.pop();
            }
        }
        cout << maxpq.top() << '\n';
    }
}