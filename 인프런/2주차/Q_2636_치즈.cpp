#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

int cheese[100][100];
bool visited[100][100];

const int dy[4] = { -1,0,1,0 };
const int dx[4] = { 0,1,0,-1 };
int h, w;


void SetAir(int y, int x) {

	visited[y][x] = true;
	cheese[y][x] = 2;

	for (int i = 0; i < 4; ++i) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= h || nx < 0 || nx >= w)continue;
		if (visited[ny][nx]) continue;
		if (cheese[ny][nx] == 1)continue;
		SetAir(ny, nx);
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	bool isExistCheese = false;
	int lastSum = 0;

	cin >> h >> w;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < w; ++j) {
			int input;
			cin >> input;
			cheese[i][j] = input;
			if (input == 1) { 
				lastSum++;
				isExistCheese = true;
			}

		}
	}

	if (!isExistCheese) {
		cout << "0\n0";
		return 0;
	}

	int time = 0;
	

	while (true) {
		int sum = 0;
		time++;
		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				visited[i][j] = false;
			}
		}
		SetAir(0, 0);

		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				if (cheese[i][j] != 1) continue;

				for (int k = 0; k < 4; ++k) {
					int ny = i + dy[k];
					int nx = j + dx[k];
					if (ny < 0 || ny >= h || nx < 0 || nx >= w)continue;
					if (cheese[ny][nx] == 2)
						cheese[i][j] = 0;
				}

			}
		}

		for (int i = 0; i < h; ++i) {
			for (int j = 0; j < w; ++j) {
				if (cheese[i][j] == 1) sum++;
			}
		}

		if (sum == 0) break;

		lastSum = sum;

	}

	cout << time << "\n" << lastSum;
	
}