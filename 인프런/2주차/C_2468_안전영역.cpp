#include <iostream>
using namespace std;


int table[104][104];
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };
bool visited[104][104];

int n;

void dfs(int y, int x, int h) {

	for (int i = 0; i < 4; ++i) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= n)
			continue;

		if (visited[ny][nx])
			continue;

		if (table[ny][nx] <= h)
			continue;

		visited[ny][nx] = true;
		dfs(ny, nx, h);
	}

}

int main() {
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> table[i][j];
		}
	}
	int ans = 0;
	int h = 0;
	while (true) {
		int k = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (table[i][j] <= h)
					continue;
				if (visited[i][j])
					continue;

				k++;
				dfs(i, j, h);
			}
		}
		h++;
		ans = max(ans, k);

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				visited[i][j] = false;
			}
		}

		if (k == 0) {
			cout << ans;
			return 0;
		}
	}

}