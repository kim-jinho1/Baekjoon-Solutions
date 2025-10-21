#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k, start;
    cin >> n >> m >> k >> start;
    vector<vector<int>> graph(n + 1);
    vector<int> dist(n + 1, -1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
    }
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        for (int next : graph[cur]) {
            if (dist[next] == -1) {
                dist[next] = dist[cur] + 1;
                q.push(next);
            }
        }
    }
    vector<int> answer;
    for (int i = 1; i <= n; i++) {
        if (dist[i] == k) answer.push_back(i);
    }
    if (answer.empty()) {
        cout << -1 << "\n";
    } else {
        sort(answer.begin(), answer.end());
        for (int city : answer) cout << city << "\n";
    }
}