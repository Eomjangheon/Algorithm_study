#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int visited[101][101];
bool table[101][101];
int n, m;

int dy[4] = {-1,1,0,0};
int dx[4] = {0,0,-1,1};

void bfs(int y, int x) {
	
	queue<pair<int, int>>q;
	q.push({y, x});
	visited[y][x] = 1;

	int nowY, nowX;

	while (q.size()) {
		tie(nowY, nowX) = q.front();
		q.pop();
		
		for (int i = 0; i < 4; ++i) {
			int ny = nowY + dy[i];
			int nx = nowX + dx[i];

			if (ny >= n || ny < 0 || nx >= m || nx < 0)
				continue;

			if (visited[ny][nx])
				continue;

			if (table[ny][nx] == 0)
				continue;

			q.push({ ny,nx });
			visited[ny][nx] = visited[nowY][nowX] + 1;
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> n >> m;
	
	for (int i = 0; i < n; ++i) {
		string str;
		cin >> str;

		for (int j = 0; j < m; ++j) {
			table[i][j] = str[j] - '0';
		}
	}

	bfs(0, 0);
	cout << visited[n - 1][m - 1];

}