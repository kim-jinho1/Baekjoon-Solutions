#include<iostream>
using namespace std;
int testcase, M, N, num, x, y;
int board[51][51];
bool visited[51][51];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, -1, 0, 1 };
void DFS(int x, int y)
{
	visited[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (ny < 0 || ny >= N || nx < 0 || nx >= M)
			continue;
		if (board[ny][nx] == 1 && !visited[ny][nx])
			DFS(nx, ny);
	}
}

int main()
{
	cin >> testcase;
	while (testcase--)
	{
		fill_n(board[0], 51 * 51, 0);
		fill_n(visited[0], 51 * 51, 0);

		int cnt = 0;
		cin >> M >> N >> num;
		for (int i = 0; i < num; i++)
		{
			cin >> x >> y;
			board[y][x] = 1;
		}

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (board[i][j] == 1 && !visited[i][j])
				{
					DFS(j, i);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
}