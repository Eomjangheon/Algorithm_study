#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int table[8][8];
int tempTabel[8][8];
bool visited[8][8];
int h, w;

const int dy[4] = { -1,0,1,0 };
const int dx[4] = { 0,1,0,-1 };

void tableCopy() {
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			tempTabel[i][j] = table[i][j];
			visited[i][j] = false;
		}
	}
}

void dfs(int y, int x) {
	visited[y][x] = true;
	tempTabel[y][x] = 2;

	for (int i = 0; i < 4; ++i) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= h || nx < 0 || nx >= w)continue;
		if (tempTabel[ny][nx] != 0)continue;
		if (visited[ny][nx])continue;
		dfs(ny, nx);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> h >> w;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			int input;
			cin >> input;
			table[i][j] = input;
		}
	}
	
	int maxNum = h * w;
	int maxSum = 0;
	for (int i = 0; i < maxNum; ++i) {
		for (int j = i + 1; j < maxNum; ++j) {
			for (int k = j + 1; k < maxNum; ++k) {
				if (table[i / w][i % w] != 0 || table[j / w][j % w] != 0 || table[k / w][k % w] != 0)continue;

				tableCopy();
				tempTabel[i / w][i % w] = 1;
				tempTabel[j / w][j % w] = 1;
				tempTabel[k / w][k % w] = 1;

				for (int a = 0; a < h; ++a) {
					for (int b = 0; b < w; ++b) {
						if (visited[a][b]) continue;
						if (tempTabel[a][b] != 2)continue;

						dfs(a, b);
					}
				}
				int sum = 0;
				for (int a = 0; a < h; ++a) {
					for (int b = 0; b < w; ++b) {
						if (tempTabel[a][b] == 0)
							sum++;
					}
				}

				maxSum = max(maxSum, sum);

			}
		}
	}
	cout << maxSum;
	
}