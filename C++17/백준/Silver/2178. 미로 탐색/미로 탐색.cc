#include <iostream>
#include <queue>
using namespace std;
int n, m;
string s[101];
int dist[101][101];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> s[i];

    queue<pair<int,int>> q;
    q.push({0,0});
    dist[0][0] = 1;

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (s[nx][ny] == '1' && dist[nx][ny] == 0) {
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
        }
    }

    cout << dist[n-1][m-1] << "\n";
}