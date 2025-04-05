#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
char table[301][301];
int n, m;
int sx, sy, ex, ey;
int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };
bool visited[301][301];
bool kill = false;
vector<pair<int, int>> v;
void dfs(int y, int x) {

	visited[y][x] = true;

	if (table[y][x] == '#') { kill = true; }
	if (kill)
		return;

	for (int i = 0; i < 4; ++i) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
		if (visited[ny][nx])continue;
		if (table[ny][nx] == '1') {
			v.push_back({ ny,nx });
			visited[ny][nx] = true;
			continue;
		}
		dfs(ny, nx);
	}
}
int main() {
	cin >> n >> m;
	cin >> sy >> sx >> ey >> ex;
	sx--;
	sy--;
	ex--;
	ey--;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> table[i][j];
		}
	}
	int ans = 0;
	while (true) {
		ans++;
		dfs(sy, sx);
		while (!v.empty()) {
			int ty, tx;
			tie(ty, tx) = v.back();
			v.pop_back();
			table[ty][tx] = '0';
		}
	
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				visited[i][j] = 0;
			}
		}
		if (kill) {
			cout << ans;
			return 0;
		}
		
	}
}