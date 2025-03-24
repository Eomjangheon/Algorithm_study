#include <iostream>
using namespace std;

int t, m, n, k;
int table[51][51];
bool visited[51][51];

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

void dfs(int y, int x) {

	visited[y][x] = true;

	for (int i = 0; i < 4; ++i) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= n || nx < 0 || nx >= m)
			continue;
		if (table[ny][nx] == 0)
			continue;
		if (visited[ny][nx] == 1)
			continue;

		dfs(ny, nx);
	}

}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	cin >> t;

	while (t--) {
		cin >> m >> n >> k;

		while (k--) {
			int x, y;
			cin >> x >> y;
			table[y][x] = 1;
		}
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (visited[i][j])
					continue;

				if (table[i][j] == 0)
					continue;

				dfs(i, j);
				sum++;
			}
		}
		cout << sum << "\n";

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				visited[i][j] = 0;
				table[i][j] = 0;
			}
		}
	}

}