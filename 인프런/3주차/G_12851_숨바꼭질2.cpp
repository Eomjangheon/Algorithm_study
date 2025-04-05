#include <iostream>
#include <queue>
#include <tuple>
using namespace std;
int n, k;
int visited[200001];
int minMoves = 10000000;
int ans = 0;

int moveCase(int i,int x) {
	if (i == 0)return x - 1;
	if (i == 1)return x + 1;
	if (i == 2)return x * 2;
}
void findBrother(int x) {
	queue<int> q;
	q.push(x);
	visited[x] = 1;

	while (!q.empty()) {
		int now = q.front();
		q.pop();
		if (now == k) {
			if (visited[now] > minMoves)
				continue;
			
			/*if (visited[now] < minMoves)
			{
				cout << "update\n";
			}*/

			minMoves = visited[now];
			ans++;
		}
		for (int i = 0; i < 3; ++i) {
			int nx = moveCase(i, now);
			if (nx < 0 || nx >= 200000)continue;
			if (visited[nx]<visited[now]+1 && visited[nx]>0)continue;
			if (visited[now] > minMoves)continue;

			visited[nx] = visited[now] + 1;
			q.push(nx);
		}
			
		
	}
}

int main() {
	cin >> n >> k;
	findBrother(n);
	cout << minMoves-1 << "\n" << ans;
}