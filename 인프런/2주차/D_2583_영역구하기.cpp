#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int m, n, k;
int table[104][104];
bool visited[104][104];
int tempAns = 0;
int ans = 0;

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };

void dfs(int y, int x) {
	visited[y][x] = true;
	tempAns++;
	for (int i = 0; i < 4; ++i) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= m || nx >= n)
			continue;

		if (visited[ny][nx])
			continue;

		if (table[ny][nx] == 1)
			continue;

		dfs(ny, nx);
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> m >> n >> k;

	vector<int> rect;
	while (k--) {
		for (int i = 0; i < 4; ++i) {
			int input;
			cin >> input;

			rect.push_back(input);
		}

		for (int i = rect[1]; i < rect[3]; i++) {
			for (int j = rect[0]; j < rect[2]; ++j) {
				table[i][j] = 1;
			}
		}
		rect.clear();
	}

	vector<int> answer;
	int t = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			if (table[i][j] == 1)
				continue;

			if (visited[i][j])
				continue;

			dfs(i, j);
			answer.push_back(tempAns);
			tempAns = 0;
			t++;
		}
	}

	sort(answer.begin(), answer.end());


	cout << t << endl;
	for (int n : answer) {
		cout << n << " ";
	}


}