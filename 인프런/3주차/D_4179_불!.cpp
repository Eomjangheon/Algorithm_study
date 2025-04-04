#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int dy[4] = { -1,1,0,0 };
int dx[4] = { 0,0,-1,1 };


int r, c;
char table[1004][1004];
int visited[1004][1004];
deque<pair<int, int>> fireQ;

void progressFire() {
	int maxq = fireQ.size();
	for(int j=0;j< maxq;++j) {
		int fx, fy;
		tie(fy, fx) = fireQ.front();
		fireQ.pop_front();

		for (int i = 0; i < 4; ++i) {
			int ny = fy + dy[i];
			int nx = fx + dx[i];

			if (ny < 0 || nx < 0 || ny >= r || nx >= c)
				continue;

			char nowPosInfo = table[ny][nx];
			if (nowPosInfo == '#' || nowPosInfo == 'F')
				continue;

			table[ny][nx] = 'F';
			fireQ.push_back({ ny,nx });
		}
	}
}

bool checkFire(int y, int x) {
	for (pair<int, int> firePos : fireQ) {
		if (y == firePos.first && x == firePos.second) {
			return true;
		}
	}
	return false;
}

void bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push({ y,x });
	visited[y][x] = 1;

	int levelOfFire = 1;

	while (!q.empty()) {
		int nowy, nowx;
		tie(nowy, nowx) = q.front();
		q.pop();

		

		//기저사례
		

		if (levelOfFire != visited[nowy][nowx]) {
			levelOfFire++;
			progressFire();
		}

		if (checkFire(nowy, nowx))
			continue;

		if (nowy == 0 || nowx == 0 || nowy == r - 1 || nowx == c - 1)
		{
			cout << visited[nowy][nowx];
			return;
		}

		for (int i = 0; i < 4; ++i) {
			int ny = nowy + dy[i];
			int nx = nowx + dx[i];

			if (ny < 0 || nx < 0 || ny >= r || nx >= c)
				continue;

			char nowPosInfo = table[ny][nx];
			if (nowPosInfo == '#' || nowPosInfo == 'F')
				continue;

			if (visited[ny][nx])
				continue;

			q.push({ ny,nx });
			visited[ny][nx] = visited[nowy][nowx] + 1;
		}
	}
	cout << "IMPOSSIBLE";

}

int main() {
	cin >> r >> c;
	int nowx, nowy;
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) {
			cin >> table[i][j];
			if (table[i][j] == 'J')
			{
				nowy = i;
				nowx = j;
			}
			else if (table[i][j] == 'F')
				fireQ.push_back({ i,j });
		}
	}

	bfs(nowy, nowx);
	
}